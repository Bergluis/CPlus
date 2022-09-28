#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    char x;
    printf("Qual cesta você quer (a,b,c ou d):");
    scanf("%c", &x);
    switch(x)
    {
    	case 'a':
    		printf("Chocolate branco");
    		break;
    	case 'b':
		    printf("Chocolate ao leite");
			break;
		case 'c':
		    printf("Chocolate meio amargo");
			break;
		case 'd':
			printf("Chocolate amargo");
			break;
		default:
			printf("Inválido!");
    }
    getch();
}

