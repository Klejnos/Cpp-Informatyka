#include <iostream>
using namespace std;

int a[3][3];
int b[3][5];
int wyn = 0;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	for(int i=0;i<3;i++) { 
        for(int j=0;j<3;j++) { 
            cout << "Podaj element tablicy a"<<"[" <<i<<"] [" << j<<"]= "; 
            cin>> a[i][j]; 
        } 
    }
    
    for (int i=0; i<3; i++) {
    	for (int j=0; j<3; j++) {
    		b[i][j] = a[i][j];
		}
		for (int k=3; k<5; k++) {
			b[i][k] = a[i][k-3];
		}
	}
	
	cout << endl;
	
	cout << "Pe³na macierz ze skopiowanymi elementami wygl¹da nastêpuj¹co: \n";
	for(int i=0;i<3;i++) { 
        for(int j=0;j<5;j++) { 
            cout << b[i][j] << " "; 
        } 
        cout << endl;
    }
	
	cout << endl;
	
	wyn = ((a[0][0])*(a[1][1])*(a[2][2])+(a[0][1])*(a[1][2])*(a[2][0])+(a[0][2])*(a[1][0])*(a[2][1]))-((a[0][2])*(a[1][1])*(a[2][0])+(a[0][0])*(a[1][2])*(a[2][1])+(a[0][1])*(a[1][0])*(a[2][2]));
	cout << "Wyznacznik tablicy a = (" << (a[0][0])*(a[1][1])*(a[2][2]) << "+" << (a[0][1])*(a[1][2])*(a[2][0]) << "+" << (a[0][2])*(a[1][0])*(a[2][1]) << ")-(" << (a[0][2])*(a[1][1])*(a[2][0]) << "+" << (a[0][0])*(a[1][2])*(a[2][1]) << "+" << (a[0][1])*(a[1][0])*(a[2][2]) << ")=" << wyn << endl;
	
	system("PAUSE");
	return 0;
}
