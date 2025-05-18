//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ",	"~/.dwm/wifi",			0,		7},
	{" ",	"~/.dwm/bluetooth",		5,		8},
	{" ",	"~/.dwm/cpu-temp",	        5,		9},
	{"",	"~/.dwm/battery",	        60,		10},
	{"",	"~/.dwm/volume",		1,		11},
	{" ",	"date '+%D %H:%M '",		60,		12},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
