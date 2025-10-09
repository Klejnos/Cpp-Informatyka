#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
using namespace std;

int a, b, c, opcja;
float p, s, R, r;

int main(){
	system("chcp 1250");
	system("cls");
	
	cout << "Umiem obliczac pole tr�jk�ta oraz promie� ko�a wpisanego lub opisanego na tr�jk�cie" << endl;
	cout << "po podaniu d�ugo�ci bok�w tr�jk�ta \n umiem sprawdza� wczytywane dane" << endl;
	cout << "musisz wybrac opcje" << endl;
	
	cout << "****************************************" << endl;
	cout << "1-pole tr�jk�ta" << endl;
	cout << "2-promie� ko�a opisanego na tr�jk�cie" << endl;
	cout << "3-promie� ko�a wpisanego w tr�jk�cie" << endl;
	cout << "****************************************" << endl;
	
	do{
	cout << "podaj opcje" << endl;
	cin >> opcja; 
	}while(opcja != 1 && opcja != 2 && opcja != 3);
	do{
	cout << endl;
	cout << "Podaj d�ugo�� boku A w centymetrach:" << endl;
	cin >> a;
	cout << "Podaj d�ugo�� boku B w centymetrach:" << endl;
	cin >> b;
	cout << "Podaj d�ugo�� boku C w centymetrach:" << endl;
	cin >> c;
	
	
	if(opcja == 1 && a + b > c && a + c > b && b + c > a){
		p = (a + b + c)/2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
		cout << "Boki tworz� tr�jk�t" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY); 
		cout << "Wczytane dane:" << endl;
		cout << "A=" << a << " cm" << endl;
		cout << "B=" << b << " cm" << endl;
		cout << "C=" << c << " cm" << endl;
		cout << "Wyniki" << endl;
		cout << "Pole tr�jk�ta = " << s << " cm^2" << endl;
	}
	
	else{
		
		if(opcja == 2 && a + b > c && a + c > b && b + c > a){
			p = (a + b + c)/2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			R = (a * b * c) / (4 * s);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
			cout << "Boki tworz� tr�jk�t" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY); 
			cout << "Wczytane dane:" << endl;
			cout << "A=" << a << endl;
			cout << "B=" << b << endl;
			cout << "C=" << c << endl;
			cout << "Wyniki" << endl;
			cout << "Promie� ko�a opisanego na tr�jk�cie = " << R << endl;
		}
		
		else{
			if(opcja == 3 && a + b > c && a + c > b && b + c > a){
			p = (a + b + c)/2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			r = s / p;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
			cout << "Boki tworz� tr�jk�t" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY); 
			cout << "Wczytane dane:" << endl;
			cout << "A=" << a << endl;
			cout << "B=" << b << endl;
			cout << "C=" << c << endl;
			cout << "Wyniki" << endl;
			cout << "Promie� ko�a wpisanego w tr�jk�cie = " << r << endl;
			}
			
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY); 
				cout << "Boki nie tworz� tr�jk�ta" << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY); 
			}
			
		}
	}
	}while(!(a + b > c && a + c > b && b + c > a));
	getchar();
	return 0;
}
