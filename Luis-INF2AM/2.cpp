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
    system ("color 3C"); // cor de fundo azul e letras azuis brilhantes
    char nom[80];
    int x,v,c,y,a,e,i,o,u;
    x=0;
    v=0;
    c=0;
    a=0;
    e=0;
    i=0;
    o=0;
    u=0;
	printf("Insira seu nome: ");
	gets(nom);
	c=strlen(nom);
	for(x=0;x<=c;x++)
	{
		if(nom[x]=='A' or nom[x]=='a' or nom[x]=='E' or nom[x]=='e' or nom[x]=='I' or nom[x]=='i' or nom[x]=='O' or nom[x]=='o' or nom[x]=='U' or nom[x]=='u' or nom[x]==' ')
		v++;
		switch(nom[x])
		{
			case 'A':
				a++;
				break;
			case 'a':
				a++;
				break;
			case 'E':
				e++;
				break;
			case 'e':
				e++;
				break;
			case 'I':
				i++;
				break;
			case 'i':
				i++;
				break;
			case 'O':
				o++;
				break;
			case 'o':
				o++;
				break;
			case 'U':
				u++;
				break;
			case 'u':
			    u++;
			    break;	
		}
	}
	y=c-v;
	printf("Caracters: %i",c);
	printf("\nConsoantes: %i",y);
	printf("\nA: %i",a);
	printf("\nE: %i",e);
	printf("\nI: %i",i);
	printf("\nO: %i",o);
	printf("\nU: %i",u);
	getch();
}
