#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	int x;
	printf("Informe um n�mero:");
	scanf("%i", &x);
	if(x>=20 && x<=90)
	printf("O n�mero est� entre 20 e 90!!");
	else
	printf("O n�mero n�o est� entre 20 e 90!!");
	getch();
}
