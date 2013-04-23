#include <stdio.h>
#include <conio.h>

#define  ansi_begin  "["
#define  ansi_end_color "m"
#define  ansi_dark	  0
#define  ansi_light   1
// All Foreground colors start with  3
// all backgrounds start with 4
// legal values are then  30 to 37	and  40 to 47
//						  FOREGROUND	 BACKGROUND


int main(int argc, char **argv)
{
 char high,fore,back;
 int x;

for(x=0;x<32000;x++)
{
 high = rand() % 2;
 fore = (rand() %8)+30;
 back =(rand() %8)+40;
 printf("[%d;%d;%dmþ",high,fore,back);

}

}

normal_vid()
{
	printf("[0;37;40m\r\n");
}

