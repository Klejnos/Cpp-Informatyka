#include <iostream>
using namespace std;

int a[10];
int zmiana = 0, n = 0;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	do{
		cout << endl << "Pamiêtaj ¿e iloœæ podanych elementów tablicy a[] nie przekroczy³a 10!" << endl << endl;
		cout << "Podaj iloœæ elementów tablicy a: ";
		cin >> n;
	} while(n>10);
	
	for(int i=0; i<n; i++){
		cout << "Podaj a[" << i << "] = ";
		cin >> a[i];
		
		if(a[i-1] < 0 && a[i] > 0){
			zmiana++;
		}
		else if(a[i-1] > 0 && a[i] < 0){
			zmiana ++;
		}
	}
	
	cout << endl << "Iloœæ zmian znaków: " << zmiana;
	
	return 0;
}
