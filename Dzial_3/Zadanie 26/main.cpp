#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int a, b, c;
int najwieksza, srednia, najmniejsza;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	do{
	cout << "Podaj warto�� liczby A: ";
	cin >> a; cout << endl;
	cout << "Podaj warto�� liczby B: ";
	cin >> b; cout << endl;
	cout << "Podaj warto�� liczby C: ";
	cin >> c; cout << endl;
	
	if(a == b || a == c || c == b){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY);
		cout << "Liczby o tej samej warto�ci! Podaj ponownie warto�ci liczb" << endl;
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	}
	}while(a == b || a == c || c == b);
	
	if(a > b && a > c){
		najwieksza = a;
		if(b > c){
			srednia = b;
			najmniejsza = c;
		}
		else{
			srednia = c;
			najmniejsza = b;
		}
	}
	if(b > a && b > c){
		najwieksza = b;
		if(a > c){
			srednia = a;
			najmniejsza = c;
		}
		else{
			srednia = c;
			najmniejsza = a;
		}
	}
	if(c > b && c > a){
		najwieksza = c;
		if(a > b){
			srednia = a;
			najmniejsza = b;
		}
		else{
			srednia = b;
			najmniejsza = a;
		}
	}
	
	cout << "Najwi�ksza=" << najwieksza << endl;
	cout << "�rednia=" << srednia << endl;
	cout << "Najmniejsza=" << najmniejsza << endl;
	
	getch();
	return 0;
}
