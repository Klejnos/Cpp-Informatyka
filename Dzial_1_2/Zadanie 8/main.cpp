#include <iostream>

using namespace std;

int x;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	cout<<"Wprowadzam liczb� x w postaci dziesi�tnej"<<endl;
	cout<<"Podaj liczb� x: ";
	cin>>x;
	cout<<endl;
	cout<<endl;
	
	cout<<"Wczytana niczba = ";
	cout<<x;
	
	cout<<" liczba w formie szesnastkowej wynosi = ";
	printf("%x",x);
	cout<<endl;
	cout<<endl;
	
	cout<<"liczba w formie �semkowej wynosi = ";
	printf("%o",x);
	
	return 0;
}
