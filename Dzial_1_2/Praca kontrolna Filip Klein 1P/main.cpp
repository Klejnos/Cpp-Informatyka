#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void gotoxy(int x,int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main(int argc, char** argv) 
{
	//poczatek wiezy lewej
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(11,0); cout<<"|"<<endl; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| FOREGROUND_INTENSITY);  
	gotoxy(10,1); cout<<"/|\\"<<endl; 
	gotoxy(5,2); cout<<"+   //|\\\\   +"<<endl; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(5,2); cout<<"+"<<endl;		gotoxy(17,2); cout<<"+"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| FOREGROUND_INTENSITY);  
	gotoxy(4,3); cout<<"/\\__///|\\\\\\__/\\"<<endl; 
	gotoxy(3,4); cout<<"//\\\\////|\\\\\\\\//\\\\"<<endl; 
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(3,5); cout<<"||||==/888\\==||||"<<endl; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(10,5); cout<<"888"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(3,6); cout<<"||||=//888\\\\=||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(10,6); cout<<"888"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(3,7); cout<<"||||=========||||"<<endl;
	gotoxy(3,8); cout<<"||||=O|OOO|O=||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(8,8); cout<<"O"<<endl;	gotoxy(10,8); cout<<"OOO"<<endl;		gotoxy(14,8); cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(3,9); cout<<"||||=O|OOO|O=||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(8,9); cout<<"O"<<endl;	gotoxy(10,9); cout<<"OOO"<<endl;		gotoxy(14,9); cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(3,10); cout<<"|\\/|=========|\\/|"<<endl;
	gotoxy(3,11); cout<<"||||==O-O-O==||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(9,11); cout<<"O"<<endl;	gotoxy(11,11); cout<<"O"<<endl;		gotoxy(13,11); cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(3,12); cout<<"||||==O-O-O==||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(9,12); cout<<"O"<<endl;	gotoxy(11,12); cout<<"O"<<endl;		gotoxy(13,12); cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(3,13); cout<<"||||=========||||"<<endl;
	
	gotoxy(3,14); cout<<"||||====+====||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY);  
	gotoxy(11,14); cout<<"+"<<endl;	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(3,15); cout<<"||||==O-O-O==||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(9,15); cout<<"O"<<endl;	gotoxy(11,15); cout<<"O"<<endl;		gotoxy(13,15); cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(3,16); cout<<"||||=========||||"<<endl;
	gotoxy(3,17); cout<<"||||==o-+-o==||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY);  
	gotoxy(11,17); cout<<"+"<<endl;	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(9,17); cout<<"o"<<endl;	gotoxy(13,17); cout<<"o"<<endl;	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(3,18); cout<<"||||-_o_8_o_-||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(9,18); cout<<"o"<<endl;	gotoxy(11,18); cout<<"8"<<endl;		gotoxy(13,18); cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(3,19); cout<<"||||-_0_8_0_-||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(9,19); cout<<"0"<<endl;	gotoxy(11,19); cout<<"8"<<endl;		gotoxy(13,19); cout<<"0"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(3,20); cout<<"||||=========||||"<<endl;
	gotoxy(3,21); cout<<"||||=========||||"<<endl;
	gotoxy(1,22); cout<<"|===  ====   ====  ===|"<<endl;
	gotoxy(1,23); cout<<"|=====================|"<<endl;
	
	gotoxy(1,24); cout<<"||==||='||='=||'=||==||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY); 
	gotoxy(8,24); cout<<"'"<<endl;	gotoxy(12,24); cout<<"'"<<endl;	gotoxy(16,24); cout<<"'"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);
	
	gotoxy(1,25); cout<<"|=====================|"<<endl;
	gotoxy(1,26); cout<<"|=======_______=======|"<<endl;
	gotoxy(1,27); cout<<"|======/=======\\======|"<<endl;
	gotoxy(1,28); cout<<"|====/===========\\====|"<<endl;
	gotoxy(1,29); cout<<"|==/===============\\==|"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY); 
	gotoxy(1,30); cout<<"|/===================\\|"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);  
	
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY);  
	gotoxy(4,5); cout<<"||"<<endl; gotoxy(17,5); cout<<"||"<<endl;
	gotoxy(4,6); cout<<"||"<<endl; gotoxy(17,6); cout<<"||"<<endl;
	gotoxy(4,7); cout<<"||"<<endl; gotoxy(17,7); cout<<"||"<<endl;
	gotoxy(4,8); cout<<"||"<<endl; gotoxy(17,8); cout<<"||"<<endl;
	gotoxy(4,9); cout<<"||"<<endl; gotoxy(17,9); cout<<"||"<<endl;
	gotoxy(4,10); cout<<"\\/"<<endl; gotoxy(17,10); cout<<"\\/"<<endl;
	gotoxy(4,11); cout<<"||"<<endl; gotoxy(17,11); cout<<"||"<<endl;
	gotoxy(4,12); cout<<"||"<<endl; gotoxy(17,12); cout<<"||"<<endl;
	gotoxy(4,13); cout<<"||"<<endl; gotoxy(17,13); cout<<"||"<<endl;
	gotoxy(4,14); cout<<"||"<<endl; gotoxy(17,14); cout<<"||"<<endl;
	gotoxy(4,15); cout<<"||"<<endl; gotoxy(17,15); cout<<"||"<<endl;
	gotoxy(4,16); cout<<"||"<<endl; gotoxy(17,16); cout<<"||"<<endl;
	gotoxy(4,17); cout<<"||"<<endl; gotoxy(17,17); cout<<"||"<<endl;
	gotoxy(4,18); cout<<"||"<<endl; gotoxy(17,18); cout<<"||"<<endl;
	gotoxy(4,19); cout<<"||"<<endl; gotoxy(17,19); cout<<"||"<<endl;
	gotoxy(4,20); cout<<"||"<<endl; gotoxy(17,20); cout<<"||"<<endl;
	gotoxy(4,21); cout<<"||"<<endl; gotoxy(17,21); cout<<"||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);  
	//koniec wiezy lewej
	
	
	//poczatek wiezy prawej
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(98,0); cout<<"|"<<endl; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| FOREGROUND_INTENSITY);  
	gotoxy(97,1); cout<<"/|\\"<<endl; 
	gotoxy(92,2); cout<<"+   //|\\\\   +"<<endl; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(92,2); cout<<"+"<<endl;		gotoxy(104,2); cout<<"+"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| FOREGROUND_INTENSITY);  
	gotoxy(91,3); cout<<"/\\__///|\\\\\\__/\\"<<endl; 
	gotoxy(90,4); cout<<"//\\\\////|\\\\\\\\//\\\\"<<endl; 
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(90,5); cout<<"||||==/888\\==||||"<<endl; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(97,5); cout<<"888"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(90,6); cout<<"||||=//888\\\\=||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(97,6); cout<<"888"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(90,7); cout<<"||||=========||||"<<endl;
	gotoxy(90,8); cout<<"||||=O|OOO|O=||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(95,8); cout<<"O"<<endl;	gotoxy(97,8); cout<<"OOO"<<endl;		gotoxy(101,8); cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(90,9); cout<<"||||=O|OOO|O=||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(95,9); cout<<"O"<<endl;	gotoxy(97,9); cout<<"OOO"<<endl;		gotoxy(101,9); cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(90,10); cout<<"|\\/|=========|\\/|"<<endl;
	gotoxy(90,11); cout<<"||||==O-O-O==||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(96,11); cout<<"O"<<endl;	gotoxy(98,11); cout<<"O"<<endl;		gotoxy(100,11); cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(90,12); cout<<"||||==O-O-O==||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(96,12); cout<<"O"<<endl;	gotoxy(98,12); cout<<"O"<<endl;		gotoxy(100,12); cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(90,13); cout<<"||||=========||||"<<endl;
	gotoxy(90,14); cout<<"||||====+====||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY);  
	gotoxy(98,14); cout<<"+"<<endl;	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(90,15); cout<<"||||==O-O-O==||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(96,15); cout<<"O"<<endl;	gotoxy(98,15); cout<<"O"<<endl;		gotoxy(100,15); cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(90,16); cout<<"||||=========||||"<<endl;
	gotoxy(90,17); cout<<"||||==o-+-o==||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY);  
	gotoxy(98,17); cout<<"+"<<endl;	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(96,17); cout<<"o"<<endl;	gotoxy(100,17); cout<<"o"<<endl;	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(90,18); cout<<"||||-_o_8_o_-||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(96,18); cout<<"o"<<endl;	gotoxy(98,18); cout<<"8"<<endl;		gotoxy(100,18); cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(90,19); cout<<"||||-_0_8_0_-||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(96,19); cout<<"0"<<endl;	gotoxy(98,19); cout<<"8"<<endl;		gotoxy(100,19); cout<<"0"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	
	gotoxy(90,20); cout<<"||||=========||||"<<endl;
	gotoxy(90,21); cout<<"||||=========||||"<<endl;
	gotoxy(88,22); cout<<"|===  ====   ====  ===|"<<endl;
	gotoxy(88,23); cout<<"|=====================|"<<endl;
	
	gotoxy(88,24); cout<<"||==||='||='=||'=||==||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY); 
	gotoxy(95,24); cout<<"'"<<endl;	gotoxy(99,24); cout<<"'"<<endl;	gotoxy(103,24); cout<<"'"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);
	
	gotoxy(88,25); cout<<"|=====================|"<<endl;
	gotoxy(88,26); cout<<"|=======_______=======|"<<endl;
	gotoxy(88,27); cout<<"|======/=======\\======|"<<endl;
	gotoxy(88,28); cout<<"|====/===========\\====|"<<endl;
	gotoxy(88,29); cout<<"|==/===============\\==|"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY); 
	gotoxy(88,30); cout<<"|/===================\\|"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);  
	
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY);  
	gotoxy(91,5); cout<<"||"<<endl; gotoxy(104,5); cout<<"||"<<endl;
	gotoxy(91,6); cout<<"||"<<endl; gotoxy(104,6); cout<<"||"<<endl;
	gotoxy(91,7); cout<<"||"<<endl; gotoxy(104,7); cout<<"||"<<endl;
	gotoxy(91,8); cout<<"||"<<endl; gotoxy(104,8); cout<<"||"<<endl;
	gotoxy(91,9); cout<<"||"<<endl; gotoxy(104,9); cout<<"||"<<endl;
	gotoxy(91,10); cout<<"\\/"<<endl; gotoxy(104,10); cout<<"\\/"<<endl;
	gotoxy(91,11); cout<<"||"<<endl; gotoxy(104,11); cout<<"||"<<endl;
	gotoxy(91,12); cout<<"||"<<endl; gotoxy(104,12); cout<<"||"<<endl;
	gotoxy(91,13); cout<<"||"<<endl; gotoxy(104,13); cout<<"||"<<endl;
	gotoxy(91,14); cout<<"||"<<endl; gotoxy(104,14); cout<<"||"<<endl;
	gotoxy(91,15); cout<<"||"<<endl; gotoxy(104,15); cout<<"||"<<endl;
	gotoxy(91,16); cout<<"||"<<endl; gotoxy(104,16); cout<<"||"<<endl;
	gotoxy(91,17); cout<<"||"<<endl; gotoxy(104,17); cout<<"||"<<endl;
	gotoxy(91,18); cout<<"||"<<endl; gotoxy(104,18); cout<<"||"<<endl;
	gotoxy(91,19); cout<<"||"<<endl; gotoxy(104,19); cout<<"||"<<endl;
	gotoxy(91,20); cout<<"||"<<endl; gotoxy(104,20); cout<<"||"<<endl;
	gotoxy(91,21); cout<<"||"<<endl; gotoxy(104,21); cout<<"||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);  
	//koniec wiezy prawej
	
	
	//poczatek mostu
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  	
	gotoxy(25,22); cout<<"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY);  
	gotoxy(25,23); cout<<"=============================================================="<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);  
	gotoxy(25,24); cout<<"--------------------------------------------------------------"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);  
	//koniec mostu
	
	
	//poczatek gornego poloczenia
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY);  
	gotoxy(42,6); cout<<"=="<<endl; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| FOREGROUND_INTENSITY);  
	gotoxy(64,6); cout<<"=="<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);  
	gotoxy(20,7);  cout<<"\\_______________________|________.,+,.________|______________________/"<<endl;  
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);  
	gotoxy(20,8);  cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|(#)|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| FOREGROUND_INTENSITY);  
	gotoxy(20,9);  cout<<"======================================================================"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);  
	//koniec gornego poloczenia
	
	
	//poczatek wody
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| FOREGROUND_INTENSITY);  
	gotoxy(0,31); cout<<"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"<<endl;
	gotoxy(0,32); cout<<"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"<<endl;
	gotoxy(0,33); cout<<"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"<<endl;
	gotoxy(0,34); cout<<"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"<<endl;
	gotoxy(0,35); cout<<"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	//koniec wody
	system("pause");
	return 0; 
}
