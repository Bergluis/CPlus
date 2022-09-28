#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int x;
int y;
int dobro;
printf("Informe um número:");
scanf("%i", &x);
printf("Informe outro número:");
scanf("%i", &y);
dobro= x*2;
printf("O dobro do primeiro número é: %i", dobro);
getch();
}
