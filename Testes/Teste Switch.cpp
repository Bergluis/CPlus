#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x;
    printf("Informe um dia da semana(em n�):");
    scanf("%i", &x);
    switch(x)
    {
    	case 1:
    		printf("Domingo!\n");
    		printf("N�o � dia �til!");
    		break;
    	case 2:
		    printf("Segunda-feira!\n");
			printf("� dia �til!");
			break;
		case 3:
		    printf("Ter�a-feira!\n");
		    printf("� dia �til!");
			break;
		case 4:
			printf("Quarta-feira!\n");
		    printf("� dia �til!");
			break;
		case 5:
			printf("Quinta-feira!\n");
		    printf("� dia �til!");
			break;
		case 6:
			printf("Sexta-feira!\n");
		    printf("� dia �til!");
			break;
		case 7:
			printf("S�bado!\n");
		    printf("N�o � dia �til!");
			break;
	}
	getch();
}
