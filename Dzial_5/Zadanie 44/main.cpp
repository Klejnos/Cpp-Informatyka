#include <iostream>
using namespace std;

int tab[5], iloczyn = 1;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	for (int i=0; i<5; i++){
		cout << "Podaj A[" << i << "]=";
		cin >> tab[i];
		
		iloczyn *= tab[i];
	}
	
	cout << "Iloczyn wczytanego ci¹gu 5 elementowego wynosi " << iloczyn;
		
	return 0;
}
