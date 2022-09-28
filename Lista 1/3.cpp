#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#define VALOR_DE_PI 3.14
main()
{
	setlocale(LC_ALL,"portuguese");
	printf("O valor de pi é: %f", VALOR_DE_PI);
	getch();
}
