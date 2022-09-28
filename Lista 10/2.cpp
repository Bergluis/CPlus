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
    char nom[80],dat[10];
    int idade;
    idade=0;
	printf("Insira seu nome: ");
	gets(nom);
	printf("Data de nascimento (dd/mm/aaaa):");
	gets(dat);
	printf("Sua idade: ");
	scanf("%i",&idade);
	puts(nom);
	puts(dat);
	printf("%i",idade);
	getch();
	}
