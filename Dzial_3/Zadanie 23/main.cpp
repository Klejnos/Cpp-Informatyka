#include <iostream>
#include <conio.h>
using namespace std;

int x;
char znak = 't';

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	do {
        do {
            cout << "DZIE� DOBRY" << endl;
            cout << "b�d� powtarza� program, a� do wczytania liczby z przedzia�u <-3,2)" << endl;
            cout << "Podaj liczb� x: ";
            cin >> x; cout << endl;
        } while (x >= -3 && x < 2);  
        cout << "\nJe�li powt�rzy� program wci�nij klawisz t\n";
        cout << "w przeciwnym wypadku wci�nij dowolny klawisz literowy" << endl;
        cin >> znak; cout << endl;
    } while (znak == 't' || znak == 'T');
    getchar();
	return 0;
}
