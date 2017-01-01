////////////////////////////////////////////////////////////////////////////////
// lite-c header for http / ftp functions
// (c) 2009 Peter Soxberger / oP group Germany
////////////////////////////////////////////////////////////////////////////////

#ifndef ACKNET_H
#define ACKNET_H

#define PRAGMA_BIND "acknet.dll";

var http_proxy(char* proxy,var port);

var http_sendpost(char* url, char* data);

var http_status(var httpid);

var http_result(var httpid, STRING* result);

var http_free(var httpid);


var ftp_download(char* url, char* path, char* username, char* password);

var ftp_upload(char* url, char* path, char* username, char* password);

var ftp_getdate(char* url, char* username, char* password);

void ftp_stop();

long ftp_size();

long ftp_sent();

long ftp_timestamp();

var ftp_status();

var ftp_debug(var mode);

#endif