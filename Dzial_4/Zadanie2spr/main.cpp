#include <iostream>
#include <iomanip>
using namespace std;

int suma=0, m=1, badanie, podzielne; 
float srednia=0;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	for (int i=10; i<=99; i++){
		suma += i;
		srednia = (float)suma / m;
		m++;
		//cout << "suma w " << i << " p�tli=" << suma << " �rednia=" << setprecision(2) << fixed << srednia << endl;
	}
	
	cout << "Podaj liczb� kt�rej podzielno�� b�dziesz bada�=";
	cin >> badanie;
	
	for (int i=10; i<=99; i++){
		if(i%5==0) podzielne++;
	}
	
	cout << "Suma to " << suma << endl << endl;
	cout << "�rednia to " << srednia << endl << endl;
	cout << "Ilo�� liczb podzielnych przez " << badanie << " to " << podzielne;
	
	
	return 0;
}
