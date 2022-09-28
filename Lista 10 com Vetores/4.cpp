#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>

void f1(char *nom,int x);

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 2F"); // cor de fundo azul e letras azuis brilhantes
    char nom[80];
    int x;
    printf("Insira seu nome: ");
    gets(nom);
    f1(nom,x);
}

void f1(char *nom,int x)
{
	for(x=0;x<4;x++)
    {
    	printf("%c",nom[x]);
    }
    getch();
}
