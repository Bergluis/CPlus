#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int ehprimo(int a);

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 4F"); // cor de fundo azul e letras azuis brilhantes
    int x,y,z;
    for(z=0;z<10;z++)
    {
    	printf("Informe um número: ");
        scanf("%i",&x);
        if(x>0)
        {
        	y=ehprimo(x);
            if(y==2)
            printf("O número é primo!\n");
            else
            printf("O número não é primo!\n");
		}
	}
	getch();     
}
int ehprimo(int a)
{
	int resultado,h;
	resultado=0;
	for(h=1;h<=a;h++)
	{
		if(a%h==0)
		resultado++;	
	}
	return resultado;
}
