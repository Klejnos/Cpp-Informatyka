#include <iostream>
using namespace std;

int n, schowek;
int a[10];

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	do {
		cout << "Podaj ilosc elementow tablicy a:\n n = ";
		cin >> n;
		if (n<0 || n>10) cout << "Tablica musi zawieraæ minimum 1 a maksimum 10 elementów!\n";
	} while (n<0 || n>10);
	
	for (int i = 0; i < n; i++) {
		cout << "Podaj a[" << i << "] = ";
		cin >> a[i];
	}
	
	cout << "\nOdwrocona tablica a: \n";
	for (int i = 0; i < n / 2; i++) {
		schowek = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = schowek;
	}
	
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	
	return 0;
}
