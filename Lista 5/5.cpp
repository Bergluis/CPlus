#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	int x;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o número do mês:");
    scanf("%f", &x);
    switch(x)
    {
    	case '1':
    		printf("Janeiro \n");
    		printf("Alta temporada");
    		break;
    	case '2':
    		printf("Fevereiro \n");
    		printf("Alta temporada");
    		break;
		case '12':
    		printf("Dezembro \n");
    		printf("Alta temporada");
    		break;
		case '6':
    		printf("Junho \n");
    		printf("Alta temporada");
    		break;
		case '7':
    		printf("Julho \n");
    		printf("Alta temporada");
    		break;				
    	default:
    		printf("Fora da temporada");
    		break;
    				
			
    }
}
    
