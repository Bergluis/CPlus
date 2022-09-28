#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	int x;
	setlocale(LC_ALL, "portuguese");
	printf("Escreva um número");
	scanf("%i", &x);
	switch(x)
	{
		case 1:
			printf("Um");
			break;
		case 2:
		    printf("Dois");
			break;
		case 3:
			printf("Três");
			break;
		case 4:
			printf("Quatro");
			break;
		case 5:
			printf("Cinco");
			break;
		default:
		 	printf("O número é inválido!!");
	}
	getch();
}
