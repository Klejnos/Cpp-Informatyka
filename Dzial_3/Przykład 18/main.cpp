#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 short int liczba; 
 printf("Wydrukuje A jako \nLiteral znakowy:\tKod ASCII:\n"); 
 printf("%c", 'A'); 
 printf("\t\t\t\t%d", 'A'); 
 skocz: // miejsce skoku
 printf("\numiem podac kod ASCII o n wiekszy od kodu A ");
 printf("\npodaj mi liczbe n: "); 
 scanf("%d", &liczba); 
 if (liczba<0) goto koniec; //skok do etykiety koniec (w d� algorytmu)
 printf("\n%c\t\t\t\t%d\n", 'A'+liczba, 'A'+liczba); 
 goto skocz; //skok do etykiety skocz (w g�r� algorytmu - je�li liczba>=0 to wraca do etykiety skocz i ponowna p�tla
 koniec: // miejsce skoku koniec
 system("PAUSE");
 return EXIT_SUCCESS;
}
