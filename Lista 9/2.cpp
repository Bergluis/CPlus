#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 2E"); // cor de fundo azul e letras azuis brilhantes
    int y,x,d[10],f[10];
    for (x=0;x<=9;x++)
    {
    printf("Informe o valor para o vetor:");
    scanf("%i",&d[x]);
	f[x]=d[x];	
    }
    for(y=0;y<=9;y++)
    {
        printf("\nO vetor f[");
        printf("%i",y);
        printf("] é:%i",f[y]);
    }
    getch();
}
