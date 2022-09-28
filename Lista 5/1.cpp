#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x;
    printf("Informe um dia da semana(em nº):");
    scanf("%i", &x);
    switch(x)
    {
    	case 1:
    		printf("Domingo!\n");
    		break;
    	case 2:
		    printf("Segunda-feira!\n");
			break;
		case 3:
		    printf("Terça-feira!\n");
			break;
		case 4:
			printf("Quarta-feira!\n");
			break;
		case 5:
			printf("Quinta-feira!\n");
			break;
		case 6:
			printf("Sexta-feira!\n");
			break;
		case 7:
			printf("Sábado!\n");
			break;
	}
	getch();
}
