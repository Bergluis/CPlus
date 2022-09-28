#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 1B"); // cor de fundo azul e letras azuis brilhantes
    int contador,x,kkk[10];
    contador=0;
    for (x=10;x<=100;x=x+10)
    {
    	kkk[contador]=x;
        printf("\nO vetor kkk[");
        printf("%i",contador);
        printf("] é:%i",kkk[contador]);
      	contador++;
    }
    getch();
}
