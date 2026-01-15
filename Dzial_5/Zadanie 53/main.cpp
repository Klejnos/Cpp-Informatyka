#include <iostream>
using namespace std;

int tab_kle[7];

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	for (int i = 0; i < 7; i++) {
		cout << "Podaj element tablicy: [" << i << "] = ";
		cin >> tab_kle[i];
	}
	
	cout << "\nwygl¹d wprowadzonej tablicy tab [ ";
	for (int i = 0; i < 7; i++) {
		cout << tab_kle[i] << " ";
	}
	
	cout << "]\n\nposortowana tablica wygl¹da nastêpuj¹co: tab[ ";
	int min, bufor;

	for (int i = 0; i < 6; i++) { 
    	min = i;

    	for (int j = i + 1; j < 7; j++) {
       		if (tab_kle[j] < tab_kle[min]) {
            	min = j;
        	}
    	}

    	bufor = tab_kle[min];
    	tab_kle[min] = tab_kle[i];
    	tab_kle[i] = bufor;
	}
	
	for (int i = 0; i < 7; i++) {
		cout << tab_kle[i] << " ";
	}
	cout << "]\n\n";
	
	system("PAUSE");
	return 0;
}
