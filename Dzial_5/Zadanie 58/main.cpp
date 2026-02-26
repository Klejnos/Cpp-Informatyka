#include <iostream>

using namespace std;

int skok, a, b;
// do wykonania zadania u¿y³em dynamicznych tablic aby zarezerwowaæ odpowiedzni¹ iloœæ miejsca na dane w tabeli
int main() {
    system("chcp 1250");
    system("cls");

    cout << "Podaj iloœæ skoków narciarskich odnotowanych przez trenera:" << endl;
    cin >> skok;

    long long* dlugosci_skokow = new long long[skok];

    cout << "Podaj jakie wyniki skoków uzyska³ zawodnik: (liczby rozdziel enterem):" << endl;
    for (int i = 0; i < skok; i++) {
        cin >> dlugosci_skokow[i];
    }

    cout << "Podaj d³ugoœæ sprawdzanego okresu (liczby rozdziel enterem):" << endl;
    cin >> a >> b;

    if (a >= b || b >= skok) {
        cout << "Nic z tego - za ma³o bananów!\n";
        delete[] dlugosci_skokow;
        return 0;
    }

    for (int i = a; i < b; i++) {
        if (dlugosci_skokow[i] >= dlugosci_skokow[i + 1]) {
            cout << "Nic z tego - za ma³o bananów!\n";
            delete[] dlugosci_skokow;
            return 0;
        }
    }

    cout << "TAK - jedziemy na zawody\n";

    delete[] dlugosci_skokow;
    return 0;
}
