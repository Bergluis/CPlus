#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float x;
	float y;
	float media;
	printf("Informe a nota 1:");
	scanf("%f", &x);
	printf("Informe a nota 2:");
	scanf("%f", &y);
	media=(x+y)/2;
	if(media >= 6)
	printf("APROVADO!!!");
	else
	printf("REPROVADO!!!");
	getch();
}
