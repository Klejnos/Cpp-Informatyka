#include <iostream>
using namespace std;

int a[3][4];
int k;
int suma = 0;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	for(int i=0;i<3;i++) { 
        for(int j=0;j<4;j++) { 
        	cout << "Podaj element a"<<"[" <<i<<"] [" << j<<"] = "; 
            cin>> a[i][j]; 
            suma += a[i][j];
        } 
    }
    
    for(int i=0;i<3;i++) { 
        for(int j=0;j<4;j++) { 
        	cout << a[i][j] << "\t";
        } 
        cout << "\n";
    }
	
	cout << "suma wszystkich elementów macierzy a= " << suma << endl;
	cout << "Podaj liczbê przez któr¹ chcesz pomno¿yæ macierz: ";
	cin >> k;
	
	for(int i=0;i<3;i++) { 
        for(int j=0;j<4;j++) { 
        	cout << (a[i][j])*k << "\t";
        } 
        cout << "\n";
    }
	
	return 0;
}
