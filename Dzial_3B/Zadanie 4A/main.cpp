#include <iostream>
using namespace std;

int n, k, s1 = 0, s2 = 0;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj N= ";
	cin >> n;
	for(int i=0; i<n; i++){
		cout << "Podaj K= ";
		cin >> k;
		if(k % 2 != 0) s1 += k;
		else s2 += k;
	}
	cout << "Wartoœæ s1= " << s1 << endl;
	cout << "Wartoœæ s2= " << s2;
	
	return 0;
}
