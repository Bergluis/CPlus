#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    char x;
    int y;
    float saldo,valop;
	printf("Fazer nova opera��o?(s ou n)\n");
	scanf("%c", &x);
	while(x=='s'||x=='S')
	{
		printf("1-consulta de saldo \n");
		printf("2-saque \n");
		printf("3-dep�sito \n");
		printf("4-sair \n");
		scanf("%i", &y);
		switch(y)
		{
			case 1:
				printf("O saldo � R$ %f",saldo);
				break;
			case 2:
				printf("Valor a retirar:");
				scanf("%f", &valop);
				saldo=saldo-valop;
				printf("O saldo � R$ %f",saldo);
				break;
			case 3:
				printf("Valor a depositar:");
				scanf("%f", &valop);
				saldo=saldo+valop;
				printf("O saldo � R$ %f",saldo);
				break;
			default:
				printf("Opera��o concluida\n");
		}
	printf("Nova opera��o?\n");
	x=getche();	
	}
	getch();
}
