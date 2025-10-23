#include <iostream>
#include <math.h>
using namespace std;

int dol=0, gor=0;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj doln¹ wartoœæ dol=";
	cin >> dol;
	cout << "Podaj górn¹ wartoœæ gora=";
	cin >> gor;
	
	for (int i=dol; i<=gor; i++){
		int k1 = 0, k2 = 0, k3 = 0, k4 = 0;
		//if (i % 2 == 0){
		//	k1=1;
		//	break;
		//}
		
		if (i < 2 || i + 8 > gor) continue;
		
		for (int j=2; j<=sqrt(i); ++j){
			if (i % j == 0){
				k1=1;
				break;
			}
		}
		
		if(k1==0){
			for (int j=2; j<=sqrt(i+2); ++j){
				if ((i + 2) % j == 0){
					k2 = 1;
					break;
				}
			}
		}
		
		if (k1 == 0 && k2==0){
			for (int j=2; j<=sqrt(i+6); ++j){
				if ((i+6) % j == 0){
					k3 = 1;
					break;
				}
			}
		}
		
		if (k1 == 0 && k2==0 && k3==0){
			for(int j=2; j<=sqrt(i+8); ++j){
				if((i+8) % j == 0){
					k4 = 1;
					break;
				}
			}
			if (k4 == 0 && i + 8 <= gor){
				cout << "      " << i << "  " << i+2 << "  " << i+6 << "  " << i+8 << "      " << endl;
			}
		}
	}
	
	return 0;
}
