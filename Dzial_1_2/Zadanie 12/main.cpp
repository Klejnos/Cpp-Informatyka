#include <iostream>
#include <stdio.h>


int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	float japka,gruszki,cenajap,cenagru;
	printf("Podaj wag� jab�ek w gramach: \n");
	scanf("\n%f",&japka);
	printf("\nPodaj wag� gruszek w tonach: \n");
	scanf("\n%f",&gruszki);
	
	japka = japka / 1000;
	gruszki = gruszki * 1000;
	
	printf("\nPodaj cen� jab�ek w kilogramach: \n");
	scanf("%f",&cenajap);
	printf("\nPodaj cen� gruszek w kilogramach: \n");
	scanf("%f",&cenagru);
	
	printf("\nWarto�� jab�ek  =\t%.2f kg *%.2f z�\t=\t%.2f z�",japka,cenajap,japka*cenajap);
	printf("\nWarto�� gruszek =\t%.2f kg *%.2f z�\t=\t%.2f z�",gruszki,cenagru,gruszki*cenagru);
	printf("\n\t\t\t\tSuma\t\t=\t%.2f z�\n",japka*cenajap+gruszki*cenagru);
	
	system("pause");
	
	return 0;
}
