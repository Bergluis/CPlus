#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int x;
int y;
int soma;
printf("Informe um número:");
scanf("%i", &x);
printf("Informe outro número:");
scanf("%i", &y);
soma= x+y;
printf("O resultado da soma é: %i", soma);
getch();

}
