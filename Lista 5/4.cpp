#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    char x;
    printf("Insira uma letra:");
    scanf("%c", &x);
    switch(x)
    {
    	case 'a':
    		printf("Vogal");
    		break;
    	case 'e':
    		printf("Vogal");
    		break;
		case 'i':
    		printf("Vogal");
    		break;
		case 'o':
    		printf("Vogal");
    		break;
		case 'u':
    		printf("Vogal");
    		break;				
    	case 'A':
    		printf("Vogal");
    		break;
    	case 'E':
    		printf("Vogal");
    		break;
		case 'I':
    		printf("Vogal");
    		break;
		case 'O':
    		printf("Vogal");
    		break;
		case 'U':
    		printf("Vogal");
    		break;					
    	default:
		    printf("Consoante");
    }
    getch();
}
     
