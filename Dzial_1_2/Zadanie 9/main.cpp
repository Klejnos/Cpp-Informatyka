#include <iostream>
#include <stdio.h>

using namespace std;

int kle,w1,w2;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	printf("Podaj liczbê naturaln¹: ");
	scanf("%d",&kle);
	printf("\nWczytana liczba x = %d",kle);
	w1=kle*kle;
	printf("\nKwadrat liczby x = %d  %d ^ 2 = %d",kle,kle,w1);
	w2=kle*kle*kle;
	printf("\nSzeœcian liczby x = %d  %d ^ 3 = %d",kle,kle,w2);
	
	return 0;
}
