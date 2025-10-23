#include <iostream>
#include <windows.h>
using namespace std;

string imie = "Filip";
int x=60, y=0;

void gotoxy(int x, int y)  
{  
COORD coord;  
coord.X = x;  
coord.Y = y;  
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  
} 

int main(int argc, char** argv) {
	gotoxy(60,0);
	for(int i=20; i>0; i--){
		gotoxy(x, y);
		cout << imie;
		x = x -2;
		y++;
	}
	return 0;
}
