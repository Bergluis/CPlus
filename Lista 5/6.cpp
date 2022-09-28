#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
     char x;
    printf("Insira O estilo:");
    scanf("%c", &x);
    switch(x)
    {
    	case 'R':
    		printf("Reggae");
    		break;
    	case 'r':
    		printf("Reggae");
    		break;
		case 'S':
    		printf("Sertanejo");
    		break;
		case 's':
    		printf("Sertanejo");
    		break;
    	case 'M':
    		printf("MPB");
    		break;
		case 'm':
    		printf("MPB");
    		break;
    	default:
    		printf("Alternativa inválida");
    }
    getch();
}
