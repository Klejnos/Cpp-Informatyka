#include <iostream>
using namespace std;

char znak = ' ';

int main() 
{
	system("chcp 1250");
	system("cls");
	
	cout << "Dzie� dobry" << endl;
	goto pytanie;
	
	tutaj:
		cout << "Jestem u g�ry" << endl;
	
	pytanie:
		cout << "Je�li chcesz sko�czy� wci�nij klawisz y lub Y" << endl;
		cout << "Podaj jaki� znak: ";
		cin >> znak;
	
	if(znak == 'y' || znak == 'Y'){
		goto koniec;
	}
	else{
		cout << "Jestem na dole" << endl;
		goto tutaj;
	}
	
	koniec:
		return 0;
}
