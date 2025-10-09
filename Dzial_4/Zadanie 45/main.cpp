#include <iostream>
#include <windows.h>
using namespace std;

int y = 0, x = 4;

void gotoxy(int x, int y) {  
	COORD coord;  
	coord.X = x;  
	coord.Y = y;  
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  
}

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	gotoxy(4,0);
	for(int i=1;i<=7;i++){
		cout << i;
		gotoxy(x+=3, 0);
	}
	
	gotoxy(0, 2);
	for(int i=1;i<=7;i++){
		cout << i << endl;
	}
	
	gotoxy(1, y);
	for(int i=0;i<=8;i++){
		cout << "|";
		gotoxy(1, y+=1);
	}
	
	gotoxy(0,1);
	for(int i=0; i<=23;i++){
		cout << "=";
	}
	
	x=4;
	for(int i=1; i<=7; i++){
		y = 2;
		for(int j=1; j<=7; j++){
			gotoxy(x, y);
			cout << i * j;
			y++;
		}
		x += 3;
	}
	
	gotoxy(0, 10);
	return 0;
}
