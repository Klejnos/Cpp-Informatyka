#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int a, b, c;
float delta, x1, x2, x0;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	do{
	cout << "Podaj warto�� wsp�czynnika A: ";
	cin >> a; cout << endl;
	}while(a == 0);
	cout << "Podaj warto�� wsp�czynnika B: ";
	cin >> b; cout << endl;
	cout << "Podaj warto�� wsp�czynnika C: ";
	cin >> c; cout << endl;
	
	delta = b * b - 4 * a * c;
	if (delta > 0){
		x1 = (-b -sqrt(delta)) / 2 * a;
		x2 = (-b +sqrt(delta)) / 2 * a;
		cout << "To r�wnanie ma dwa pierwiastki rzeczywiste: x1=" << x1 << " oraz x2=" << x2 << endl;
		cout << "Delta = " << delta;
	}
	if (delta == 0){
		x0 = (-b) / 2 * a;
		cout << "To r�wnanie ma jeden pierwiastek rzeczywisty: x0=" << x0 << endl;
		cout << "Delta = " << delta;
	}
	if(delta < 0){
		cout << "To r�wnanie nie ma pierwiastk�w rzeczywistych"<< endl;
		cout << "Delta = " << delta;
	}
	
	getch();
	return 0;
}
