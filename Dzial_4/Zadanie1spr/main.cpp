#include <iostream>
#include <Math.h>
using namespace std;

int dol=0, gor=0, k1, k2, j, teraz, poprzednia;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	do{
		cout << "podaj doln¹ wartoœæ dol=";
		cin >> dol;
		cout << "podaj górn¹ wartoœæ gora=";
		cin >> gor;
		if (gor <= 1 || dol <= 1) cout << "wartoœci musz¹ byæ wiêksze od dol" << endl;
		if (gor <= dol) cout << "Wartoœæ gor musi byæ wiêksza od dol" << endl;
	} while (gor <= 1 && dol <= 1 && gor > dol);
	
	cout << endl << "  Znalezione liczby bliŸniacze to: " << endl;
	for (int i=dol; i<=gor; i++){
		k1=0;
		for(j=2;j<=sqrt(i);++j) {
        	if ((i) % j==0) {
           		k1=1;
          	} 
        } 
     	if (k1==0){ 
            int k2 = 0;
            for (j = 2; j <= sqrt(i + 2); ++j) {
                if ((i + 2) % j == 0) {
                    k2 = 1;
                    break;
                }
            }
            if (k2 == 0 && i + 2 <= gor)
                cout << "            " << i << "            " << i + 2 << endl;
        }
    	}
	
	return 0;
}
