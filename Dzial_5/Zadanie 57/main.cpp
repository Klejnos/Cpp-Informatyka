#include <iostream>
#include <iomanip>

using namespace std;

int n;
long long fib[1000];

int main() {
	system("chcp 1250");
	system("cls");
	
	fib[0] = 1;
	fib[1] = 1;
    
    cout << "Podaj który element ciagu chcesz wyœwietliæ:" << endl;
    cin >> n;

    if (n <= 0) {
        cout << "Podaj inn¹ liczbê" << endl;
        return 0;
    }

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < n; i++) {
        cout << i + 1 << " wyraz ci¹gu Fibonacciego wynosi: " << fib[i] << endl;
    }

    if (n > 1) {
        double fi = (double)fib[n - 1] / fib[n - 2];
        cout << fixed << setprecision(5);
        cout << "\nprzybli¿enie z³otej liczby dla: " << n << " wyrazu ci¹gu wynosi: " << fi << endl;
    }

    return 0;
}
