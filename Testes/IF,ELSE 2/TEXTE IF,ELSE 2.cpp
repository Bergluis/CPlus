#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int x;
	printf("Informe um n�mero:");
  	scanf("%i", &x);
	if (x > 20)
	printf("O n�mero � maior que 20!");
	else
	if (x < 20)
	printf("O n�mero � menor que 20!");
	else
	printf("O n�mero � igual a 20!");
	getch();
}
