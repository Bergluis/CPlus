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
    int x,C[10];
    x=0;
    for(x=0;x<=9;x++)
    {
    	printf("Informe um valor para o vetor:");
    	scanf("%f",&C[x]);
    	if (C[x]<0)
        C[x]=0;
    }
	for(x=0;x<=9;x++)
	{
	    printf("\nO vetor C[");
        printf("%i",x);
        printf("] é:%i",C[x]);
    }
}
