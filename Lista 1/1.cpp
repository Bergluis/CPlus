#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int x;
printf("Informe um n�mero:");
scanf("%i", &x);
printf("O n�mero �: %i", x);
getch();
}
