#include <iostream>
using namespace std;

int x;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	cout << "B�d� sprawdza� czy liczba nale�y do przedzia�u <-5,6" << endl;
	cout << "Podaj liczb� do sprawdzenia: ";
	cin >> x;
	
	if((x >= -5) && (x < 6))
	{
		cout << "liczba nale�y do przedzia�u <-5,6";
	}
	else
	{
		cout << "liczba nie nale�y do przedzia�u <-5,6";
	}
	
	return 0;
}
