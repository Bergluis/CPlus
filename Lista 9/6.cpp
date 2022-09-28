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
    int x,y,b[10];
    
    for(x=0;x<10;x++)
    {
    printf("Informe um valor para o vetor:");
    scanf("%i",&b[x]);
    }
    printf("Informe um número:");
    scanf("%i",&y);
    for(x=0;x<10;x++)
    {
    if(b[x]==y)
    {
    printf("\nO número %i",y);
	printf(" se encontra na posição:%i",x);
    }
    }
    getch();
}
    
