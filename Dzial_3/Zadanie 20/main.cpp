#include <iostream>
using namespace std;

char odpowiedz = 't';
int bok, wynik;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	while(odpowiedz == 't')
	{
		cout << "Podaj bok kwadratu w centymetrach: ";
		cin >> bok; cout << endl;
		if(bok == 0)
		{
			cout << "Bok nie mo�e by� r�wny zero" << endl;
		}
		else
		{
			wynik = bok * bok;
			cout << "Pole kwadratu = " << wynik << "cm^2" <<endl;
		}
		cout << "je�li powt�rzy� program wci�nij t (tak)" << endl;
		cout << "w przeciwnym wypadku wci�nij dowolny klawisz literowy" << endl;
		cin >> odpowiedz; cout << endl;
	}
	return 0;
}
