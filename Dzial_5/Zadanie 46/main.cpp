#include <iostream>
#include <cstdlib>
using namespace std;

int a[8];
int L_mniejsze = 0, L_wieksze = 0, L_rowne = 0;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	for(int i=0; i<8; i++){
		cout << "podaj A[" << i << "]=";
		cin >> a[i];
		
		if (a[i] > 0) L_wieksze++;
		else if (a[i] < 0) L_mniejsze++;
		else L_rowne++;
	}
	
	cout << "liczba wyrazów ci¹gu które s¹ wiêksze od zera wynosi " << L_wieksze << endl;
	cout << "liczba wyrazów ci¹gu które s¹ równe zero wynosi " << L_rowne << endl;
	cout << "liczba wyrazów ci¹gu które s¹ mniejsze od zera wynosi " << L_mniejsze << endl;
	getchar();
	return 0;
}
