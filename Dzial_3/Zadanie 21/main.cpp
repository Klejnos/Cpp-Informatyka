#include <iostream>
#include <conio.h>
using namespace std;

double x;
char znak = 'f';

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	while(znak == 'f' || znak == 'F'){
	cout << "Podaj liczb� x: ";
	cin >> x; cout << endl;
	
	if(x > -1 && x < 1){
		x *= x;
		printf("f(x)=%.2f",x); cout << endl;
	}
	else{
		x = 1;
		cout<< "f(x)=" << x << endl;
	}
	cout << "Je�eli powt�rzy� program wci�nij klawisz f" << endl;
	cout << "W przeciwnym wypadku wci�nij dowolny klawisz literowy" << endl;
	cin >> znak;
	}
	getchar();
	return 0;
}
