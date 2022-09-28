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
	if((x%2)==0)
	printf("O número é par!!");
	else
	printf("O número é impar!!");
	getch();
}
