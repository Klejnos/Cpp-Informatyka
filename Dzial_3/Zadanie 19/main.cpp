#include <iostream>
using namespace std;

int x;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj liczb� ca�kowit�: ";
	cin >> x; cout << endl;
	if(x > 0)
	{
		cout << "Liczba jest wi�ksza od zera" << endl;
	}
	else 
	{
		if(x == 0)
		{
			cout << "Liczba r�wna zero" << endl;
		}
		else
		{
			cout << "Liczba jest mniejsza od zera" << endl;
		}
	}
	return 0;
}
