///////////////////////////////////////////////////
// strio.c - lite-C string / file helper functions
// (c) oP group - jcl 2009
///////////////////////////////////////////////////
#ifndef strio_c
#define strio_c

#include <acknex.h>
#include <windows.h>
#include <stdio.h>

// string functions ///////////////////////////////

STRING* _str_temp = ""; 

var _strpos = 0; // last parsed position in the string

//replaces in "str" the first occurrence of "original" with "replacement"
STRING* str_replace(STRING* str, char* original, char* replacement) 
{
	var start = str_stri(str,original);
	if (start) 
	{
	  str_cpy(_str_temp,str);	
		str_trunc(str,str_len(str)-start+1);
		str_clip(_str_temp,start+str_len(original)-1);
		str_cat(str,replacement);
		str_cat(str,_str_temp);
   	return str;
	}
	return NULL;
}

//replaces in "str" all occurrences of "original" with "replacement"
STRING* str_replaceall(STRING* str, char* original, char* replacement) 
{
  if (!str_replace(str,original,replacement)) return NULL;
	while(str_replace(str,original,replacement));
  return str;
}

//cuts a string from another one between two positions
STRING* str_cut(STRING* to,char* from,var start,var end) 
{
	if (!to) to = str_create("");
	var len = str_len(from);
	if (to != from) str_cpy(to,from);
	if (end > 0 && end < len)
   	str_trunc(to,len-end);
  if (start > 0)
		str_clip(to,start-1);
	return to;
}

// parses a word out of a string, beginning with a start position. 
// If pos==0, it parses from the position of the last str_parse call. 
STRING* str_parse(STRING* to,char* from,var pos)
{
	if (pos > 0) _strpos = pos;
	if (_strpos <= 0) return NULL; // last call found string end
	while (' ' == str_getchr(from,_strpos)) _strpos++;
	if (_strpos > str_len(from)) return NULL;
	var end = str_chr(from,_strpos,' ');
  to = str_cut(to,from,_strpos,end-1);
  _strpos = end; // -1 when end is reached
	return to;
} 

// finds a word in a string, when the end of the word is given 
STRING* str_parse_tail(STRING* to,char* from,char* tail)
{
	if (!tail || !from) return NULL;
	var len = str_len(tail);
	var pos = str_stri(from,_chr(tail));
	if (!pos) return NULL;
	var start = str_chr(from,-pos,' ');
	_strpos = pos+len+1;
  return str_cut(to,from,start+1,pos+len-1);
}

// finds a word in a string, when the start of the word is given 
STRING* str_parse_head(STRING* to,char* from,char* head)
{
	if (!head || !from) return NULL;
	var len = str_len(head);
	var pos = str_stri(from,_chr(head));
	if (!pos) return NULL;
  return str_parse(to,from,pos);
}

// file functions /////////////////////////////////

OPENFILENAME* filename(char* title,char* filter)
{
	static char szFile[MAX_PATH];
	ZeroMemory(szFile,MAX_PATH);
	static OPENFILENAME ofn;
	ZeroMemory(&ofn,sizeof(OPENFILENAME));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = hWnd;
	ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST | OFN_OVERWRITEPROMPT;
	if (filter) {
		static char szFilter[256];
		ZeroMemory(szFilter,256);
		int size = str_len(filter);
		strcpy(szFilter,_chr(filter));
		strcpy(szFilter+size+1,_chr(filter));
		ofn.lpstrFilter = szFilter;
	} else
		ofn.lpstrFilter = "All Files(*.*)\0*.*\0\0";
	   
	ofn.lpstrTitle	= _chr(title);
	ofn.lpstrFile	= szFile;
	ofn.nMaxFile	= MAX_PATH;
	return &ofn;
}

char* file_dialog_open(char* title,char* filter)
{
	OPENFILENAME* pofn = filename(title,filter);
	if (GetOpenFileName(pofn))
		return pofn->lpstrFile;
	else
		return NULL;
}

char* file_dialog_save(char* title,char* filter)
{
	OPENFILENAME* pofn = filename(title,filter);
	if (GetSaveFileName(pofn))
		return pofn->lpstrFile;
	else
		return NULL;
}

char* file_dialog(char* title,char* filter)
{
	return file_dialog_open(title,filter);
}

#endif
