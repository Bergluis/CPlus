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
	if((x%2)==0)
	printf("O n�mero � par!!");
	else
	printf("O n�mero � impar!!");
	getch();
}
