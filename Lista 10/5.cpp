#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
#include <windows.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 2F"); // cor de fundo azul e letras azuis brilhantes
    char nom[80];
    int x;
    printf("Insira seu nome: ");
    gets(nom);
    for(x=0;x<strlen(nom);x++)
    {
    	printf("%c",toupper(nom[x]));
    }
    getch();
}
