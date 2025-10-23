#include <iostream>
using namespace std;

int numer;

int main(int argc, char** argv) {	
	cout << "Podaj numer w dzienniku: ";
	cin >> numer;
	for (int i=numer; i<=numer+15; i++){
		cout << "I=" << i << "      ";
		cout << "I*I=" << i*i << "      ";
		cout << "I*I*I=" << (i*i)*i << endl;
	}
	
	return 0;
}
