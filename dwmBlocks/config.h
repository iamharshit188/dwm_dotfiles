//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

  {":) ",  "loginfo",  1,  16}, 
  {"",  "OSinfo", 1,  10},
  {"x_x",  "nettraf",  1,  16}, 
  {"Time :  ",  "clock",  60, 1},
  {"UwU ",  "internet", 5,  4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
