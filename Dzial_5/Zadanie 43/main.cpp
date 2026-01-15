#include <iostream>
using namespace std;

float A[7], suma = 0, srednia = 0;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	for (int i=0; i<7; i++){
		cout << "Podaj A[" << i << "]=";
		cin >> A[i];
		suma += A[i];
	}
	srednia = suma/7;
	
	cout << "suma elementów wczytanych do tablicy A jest równa " << suma << endl;
	cout << "srednia elementów wczytanych do tablicy A jest równa " << srednia;
	
	return 0;
}
