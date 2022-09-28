#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>

void f1(char *nom, char *sob);

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 2F"); // cor de fundo azul e letras azuis brilhantes
    int a1,a2,x;
    char nom[50],sob[40];
    printf("Insira seu nome: ");
    gets(nom);
    printf("Seu sobrenome: ");
    gets(sob);
    f1(nom,sob);
}

void f1(char *nom, char *sob)
{
	puts(sob); 
	printf(", "); 
	puts(nom);
}
