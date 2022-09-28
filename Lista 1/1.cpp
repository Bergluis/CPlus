#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int x;
printf("Informe um número:");
scanf("%i", &x);
printf("O número é: %i", x);
getch();
}
