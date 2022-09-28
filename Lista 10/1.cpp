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
    int a1,a2,x;
    char nom[50],sob[40];
    printf("Insira seu nome: ");
    gets(nom);
    a1=strlen(nom);
    printf("Seu sobrenome: ");
    gets(sob);
    a2=strlen(sob);
    puts(sob); 
	printf(", "); 
	puts(nom);
    getch();
}
