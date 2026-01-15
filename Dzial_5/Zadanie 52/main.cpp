#include <iostream>
using namespace std;

int t_kle[7];

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	for (int i = 0; i < 7; i++){
		cout << "podaj t[" << i << "]=";
		cin >> t_kle[i];
	}
	
	cout << "wygl¹d wprowadzonej tabilcy t\n";
	for (int i = 0; i < 7; i++){
		cout << t_kle[i] << " ";
	}
	cout << endl;
	
	cout << "wygl¹d posortowanej rosn¹co tablicy t\n";
	
	int schowek_kle;
        for (int i=0; i<7-1; i++){
            for (int j = 0; j<7-i-1; j++){
                if(t_kle[j]>t_kle[j+1]){
                    schowek_kle = t_kle[j];
                    t_kle[j] = t_kle[j+1];
                    t_kle[j+1] = schowek_kle;
                }
            }
        }
	
	for (int i = 0; i < 7; i++){
		cout << t_kle[i] << " ";
	}
	cout << endl;
	
	system("PAUSE");
	return 0;
}
