#define przelacz switch
#define przypadek case

#include <iostream>
#include <conio.h>
using namespace std;

char panstwo = ' ';

int main()
{
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj pierwsz� liter� kraju, z kt�rym graniczy Polska:\n";
	
	cin >> panstwo;
	przelacz(panstwo){
		przypadek 'n': {
			cout << "Niemcy";
			break;
		}
		przypadek 'N': {
			cout << "Niemcy";
			break;
		}
		przypadek 'c':{
			cout << "Czechy";
			break;
		}
		przypadek 'C':{
			cout << "Czechy";
			break;
		}
		przypadek 'S':{
			cout << "S�owacja";
			break;
		}
		przypadek 's':{
			cout << "S�owacja";
			break;
		}
		przypadek 'u':{
			cout << "Ukraina";
			break;
		}
		przypadek 'U':{
			cout << "Ukraina";
			break;
		}
		przypadek 'b':{
			cout << "Bia�oru�";
			break;
		}
		przypadek 'B':{
			cout << "Bia�oru�";
			break;
		}
		przypadek 'l':{
			cout << "Litwa";
			break;
		}
		przypadek 'L':{
			cout << "Litwa";
			break;
		}
		przypadek 'r':{
			cout << "Rosja";
			break;
		}
		przypadek 'R':{
			cout << "Rosja";
			break;
		}
		default: cout << "Nie ma takiego kraju na granicy z Polsk�!";
	}
	getch();
	return 0;
}
