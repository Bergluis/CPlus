#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	int x,y;
	printf("Informe um número:");
	scanf("%i", &x);
	y=pow(x,2);
	printf("O seu número ao quadrado é %i", y);
	getch();
}
