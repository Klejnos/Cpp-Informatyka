#include <iostream>
#include <algorithm>

using namespace std;
int rozmiar;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj ile nazwisk wprowadzasz do tablicy ";
	cin >> rozmiar;
	
	string* nazwiska = new string[rozmiar];
	cout << "Podaj " << rozmiar << " nazwiska: \n";
	for (int i = 0; i < rozmiar; i++) {
		cin >> nazwiska[i];
	}
	
	cout << "Nazwiska posortowane alfabetycznie: \n";
	sort(nazwiska, nazwiska + rozmiar);
	for (int i = 0; i < rozmiar; i++) {
		cout << nazwiska[i] << endl;
	}
	
	delete[] nazwiska;
	return 0;
}
