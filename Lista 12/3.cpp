#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int somatorio(int a);

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 4F"); // cor de fundo azul e letras azuis brilhantes
    int x,y,z;
    for(z=0;z!=10;z++)
    {
    	do{
    	printf("\nInforme um n�mero: ");
        scanf("%i", &x);
		}while(x<=0);
        y=somatorio(x);
        printf("A soma dos n�mero de 1 at� %i � %i",x,y);
    } 
	getch();     
}
int somatorio(int a)
{
	int resultado,h;
	resultado=0;
	for(h=1;h<=a;h++)
	{
		resultado=(resultado+h);	
	}
	return resultado;
}
