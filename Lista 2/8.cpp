#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int x;
printf("Escreva um n�mero inteiro:");
scanf("%i", &x);
if(x > 0)
    printf("O n�mero � positivo!!");
else
if(x < 0)
    printf("O n�mero � negativo!!");
else
    printf("O n�mero � zero");
getch();
}
