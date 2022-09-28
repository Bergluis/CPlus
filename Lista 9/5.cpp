#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 4F"); // cor de fundo azul e letras azuis brilhantes
    int x[10],r[10],h,a;
    h=0;
	a=0;
	for(h=0;h<10;h++)
	{
		r[h]=0;
		x[h]=0;
	}
    for(h=0;h<10;h++)
    {
        printf("Um número:");
        scanf("%i",&x[h]);
        if(x[h]<0)
        {
    	    r[a]=x[h];
			a++;
        }
    }
    printf("O vetor R é:\n");
	for(h=0;h<10;h++)
	{
		printf("%i\n",r[h]);
	}
	getch();
}
