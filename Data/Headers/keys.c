///////////////////////////////////////////////////////////////////////////////////////////
// Key and joystick utility functions
///////////////////////////////////////////////////////////////////////////////////////////
#ifndef keys_c
#define keys_c

// helper functions //////////////////////////////////

function button_pressed(var buttons,var num) 
{
	if (num <= 0 || num > 32)
		return 0;
	else if (num <= 10)
		return (buttons<<10) & (1 << num-1);
	else
		return buttons & (1 << num-11);
}

// library functions /////////////////////////////////

// returns nonzero when the given button on joystick 1 is hold down
function joy_pressed(var num) 
{
	return button_pressed(joy_buttons,num);
}

// returns nonzero when the given button on joystick 2 is hold down
function joy2_pressed(var num) 
{
	return button_pressed(joy2_buttons,num);
}

// returns nonzero when the given button was hit since the last call
function joy_hit(var num)
{
	static var last_buttons = 0;
	var jhit = 0;
	if(!button_pressed(last_buttons,num)
		&& button_pressed(joy_buttons,num))
		jhit = 1;
	last_buttons = joy_buttons;
	return jhit;
}

byte _keys_down[256];

// returns nonzero when the given key was hit since the last call
function key_hit(var num)
{
	if (num <= 0 || num >= 256) return 0;
	if(!_keys_down[num] && key_pressed(num))
	{ 
		_keys_down[num] = 1;
		return 1;
	} 
	_keys_down[num] = key_pressed(num);
	return 0;
}

// returns nonzero when the key with the given name was hit
function key_hit(STRING* keystr)
{
	return key_hit(key_for_str(keystr));
}

// mouse functions ////////////////////////////////////////

// drag window with left mouse button
// assign this to the on_mouse_left event
function mouse_drag()
{
   VECTOR click_pos,new_pos;
   vec_set(click_pos,mouse_cursor);
// move the window by the mouse distance to the click position   
   while (mouse_left) {
      vec_diff(new_pos,mouse_cursor,click_pos);
      vec_add(new_pos,window_pos);
      video_window(new_pos,NULL,0,0);
      wait(1);
   }
}


#endif // keys_c
