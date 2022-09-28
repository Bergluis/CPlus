#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	int x;
	printf("Informe um número:");
	scanf("%i", &x);
	if(x>=20 && x<=90)
	printf("O número está entre 20 e 90!!");
	else
	printf("O número não está entre 20 e 90!!");
	getch();
}
