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
    char nom[80];
    int x,v,c;
    float a1;
    x=0;
    a1=0;
    v=0;
    c=0;
	printf("Insira seu nome: ");
	gets(nom);
	c=strlen(nom);
	for(x=0;x<=c;x++)
	{
		//if(nom[x]=='A' or nom[x]=='a' or nom[x]=='E' or nom[x]=='e' or nom[x]=='I' or nom[x]=='i' or nom[x]=='O' or nom[x]=='o' or nom[x]=='U' or nom[x]=='u')
		switch(nom[x])
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':v++; break;	
		}
		//v++;
	}
	a1=(v*100)/c;
	printf("O nome possui %.2f",a1);
	printf(" porcento de vogais no seu nome!!");
	printf("\nE tem %i",v);
	printf(" vogais!!");
	getch();
}
