#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<conio.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	int x;
	printf("Insira um n�mero inteiro:");
	scanf("%i", &x);
	if(x%3==0 && x%7==0)
	printf("O n�mero � divis�vel por 3 e 7!!");
	else
	printf("O n�mero n�o � divis�vel por 3 e/ou 7!!");
	getch();
	}
