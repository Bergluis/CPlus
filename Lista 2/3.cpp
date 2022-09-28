#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float x;
float y;
float media;
printf("Informe sua primeira nota:");
scanf("%f", &x);
printf("Informe sua segunda nota:");
scanf("%f", &y);
media=((x+y)/2);
printf("A média do aluno é: %f", media);
getch();

}
