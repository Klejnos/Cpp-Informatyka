#include <iostream>
using namespace std;

char f='f';
char k='k';

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	cout << "Prosze poda� pierwsz� liter� kodu:" << endl;
	cin >> f;
	cout << "Prosze poda� drug� liter� kodu:" << endl;
	cin >> k;
	cout << "Podany kod to: " << f << k << endl;
	
	/*if(f == 'f' || f == 'F' && k == 'k' || k == 'K'){
		cout << "Dzie� dobry";
	}
	else{
		cout << "�egnaj";
	}*/
	
	if(f == 'f' || f == 'F' && k == 'k' || k == 'K') cout << "Dzie� dobry";
	else cout << "�egnaj";
	return 0;
}
