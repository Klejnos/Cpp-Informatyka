#include <iostream>
using namespace std;

int n, m = 0;
int a[10];

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	do {
        cout << "Podaj ilosc elementow tablicy a:\n";
        cout << "n = ";
        cin >> n;
        if (n <= 0 || n > 10) cout << "Tablica musi zawieraæ minimum 1 a maksimum 10 elementów!\n";
    } while (n <= 0 || n > 10);
	
	for (int i=0; i<n; i++){
		cout << "Podaj a[" << i << "] = ";
		cin >> a[i];
	}
	
	cout << endl << "Odwrocona tablica a:\n";
	for (int i=n-1; i>=0; i--){
		cout << "a[" << m << "] = " << a[i] << endl;
		m++;
	}
	
	system("PAUSE");
	return 0;
}
