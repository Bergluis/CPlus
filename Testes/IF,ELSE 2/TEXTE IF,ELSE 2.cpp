#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int x;
	printf("Informe um número:");
  	scanf("%i", &x);
	if (x > 20)
	printf("O número é maior que 20!");
	else
	if (x < 20)
	printf("O número é menor que 20!");
	else
	printf("O número é igual a 20!");
	getch();
}
