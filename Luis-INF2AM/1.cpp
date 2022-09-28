#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 2F"); // cor de fundo azul e letras azuis brilhantes
    float x,z,tot;
    int y,w,peso[8];
    w=0;
    printf("Seu peso: ");
    scanf("%f",&x);
    for(y=0;y<8;y++)
    {
    	w++;
    	printf("Peso perdido na %i",w);
    	printf("ª semana");
    	scanf("%i", &peso[y]);
    	z=peso[y]+z;
    }
    tot=x-z;
    printf("Você perdeu %f", z);
    printf("Kg!!!");
    printf("Você ficou com %f",tot);
    printf("Kg");
    getch();
}
