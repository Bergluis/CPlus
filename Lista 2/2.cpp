#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float b;
float h;
float area;
printf("Informe a altura do tri�ngulo:");
scanf("%f", &h);
printf("Informe a base do tri�ngulo:");
scanf("%f", &b);
area=(h*b)/2;
printf("A �rea do tri�ngulo �: %f\n", area);
getch();
}

