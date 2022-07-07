#include "common.h"

void gotoxy(int x, int y)
{
	COORD Cur = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
void Color(int back, int text)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (back << 4) + text);//handle, color value
}
// textcolor(0);    Black
// textcolor(1);    Dark Blue
// textcolor(2);	Dark Green	   
// textcolor(3);	Dark Sky Blue
// textcolor(4);	Dark Red	  
// textcolor(5);	Dark Purple
// textcolor(6);	Dark Yellow	  
// textcolor(7);	Gray
// textcolor(8);	Dark Gray	 
// textcolor(9);	Blue
// textcolor(10);	Green	  
// textcolor(11);	Sky Blue
// textcolor(12);	Red	  
// textcolor(13);	Purple
// textcolor(14);	Yellow	  
// textcolor(15);	White
