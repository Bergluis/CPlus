#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade;
    printf("Insira sua idade:");
    scanf("%i", &idade);
    switch(idade)
    {
    	case 10:
    		printf("Valor R$180,00");
    		break;
    	case 20:
    		printf("Valor R$150,00");
    		break;
		case 30:
    		printf("Valor R$195,00");
    		break;
		case 40:
    		printf("Valor R$230,00");	
    		break;
		default:
		    printf("Valor anterior!");		
    }
    getch();
}
