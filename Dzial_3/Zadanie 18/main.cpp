#include <iostream>
using namespace std;

int a, b;
int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	cout << "Program wykonuj�cy dzielenie" << endl;
	cout << "Podaj pierwsz� liczb�: ";
	cin >> a;
	cout << endl;
	cout << "Podaj drug� liczb�: ";
	cin >> b;
	cout << endl;
	
	if(b == 0)
	{
		cout << "B��d! Dzielenie przez 0";
	}
	else
	{
		cout << "Wynik dzielenia to " << a/b;
	}
	return 0;
}
