#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	
	cout<<"1 przyk�ad funkcji DOS: "<<endl;
	system("tree");
	cout<<endl;
	cout<<"Teraz kasuj� ekran i dalasza cz�� programu po naci�ni�ciu dowolnego klawisza "<<endl;
	system("pause");
	system("cls");
	
	cout<<"2 przyk�ad funkcji DOS: "<<endl;
	system("tasklist");
	cout<<endl;
	cout<<"Teraz kasuj� ekran i dalasza cz�� programu po naci�ni�ciu dowolnego klawisza "<<endl;
	system("pause");
	system("cls");
	
	cout<<"3 przyk�ad funkcji DOS: "<<endl;
	system("systeminfo");
	cout<<endl;
	cout<<"Teraz kasuj� ekran i dalasza cz�� programu po naci�ni�ciu dowolnego klawisza "<<endl;;
	system("pause");
	system("cls");
	
	cout<<"4 przyk�ad funkcji DOS: "<<endl;
	system("vol");
	cout<<endl;
	cout<<"Teraz kasuj� ekran i dalasza cz�� programu po naci�ni�ciu dowolnego klawisza "<<endl;
	system("pause");
	system("cls");
	
	cout<<"5 przyk�ad funkcji DOS: "<<endl;
	system("ver");
	cout<<endl;
	cout<<"Teraz kasuj� ekran i dalasza cz�� programu po naci�ni�ciu dowolnego klawisza "<<endl;
	system("pause");
	system("cls");
	return 0;
}
