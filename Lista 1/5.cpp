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
printf("Informe um n�mero:");
scanf("%i", &x);
printf("Informe outro n�mero:");
scanf("%i", &y);
dobro= x*2;
printf("O dobro do primeiro n�mero �: %i", dobro);
getch();
}
