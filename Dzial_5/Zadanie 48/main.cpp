#include <iostream>
using namespace std;

int a[5][2];
float srednie[5];

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	for (int i=0; i<5; i++){
		for(int j=0; j<2; j++){
			cout << "Podaj element a[" << i << "] [" << j << "] = ";
			cin >> a[i][j];
		}
		srednie[i] = (a[i][0] + a[i][1]) / 2.0;
	}
	
	
	for (int i=0; i<5; i++){
		cout << a[i][0] << " " << a[i][1] << "\tsrednia w wierszu " << i << " macierzy wynosi \t" << srednie[i] << endl << endl;
	}
	
	
	cout << "tablica srednich wygl¹da natêpuj¹co: A[ ";
	for (int i=0; i<5; i++){
		cout << srednie[i] << " ";
	}
	cout << "]\n\n";
	
	
	double min = srednie[0];
    double max = srednie[0];
    int minx = 0, maxx = 0;

    for (int i = 1; i < 5; i++) {
        if (srednie[i] > max) {
            max = srednie[i];
            maxx = i;
        }
        if (srednie[i] < min) {
            min = srednie[i];
            minx = i;
        }
    }

    cout << "max: A[" << maxx << "] = " << max << endl;
    cout << "min: A[" << minx << "] = " << min << endl;
	
	system("PAUSE");
	return 0;
}
