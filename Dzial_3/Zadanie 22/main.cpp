#include <iostream>
using namespace std;

char f='f';
char k='k';

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	cout << "Prosze podaæ pierwsz¹ literê kodu:" << endl;
	cin >> f;
	cout << "Prosze podaæ drug¹ literê kodu:" << endl;
	cin >> k;
	cout << "Podany kod to: " << f << k << endl;
	
	/*if(f == 'f' || f == 'F' && k == 'k' || k == 'K'){
		cout << "Dzieñ dobry";
	}
	else{
		cout << "¯egnaj";
	}*/
	
	if(f == 'f' || f == 'F' && k == 'k' || k == 'K') cout << "Dzieñ dobry";
	else cout << "¯egnaj";
	return 0;
}
