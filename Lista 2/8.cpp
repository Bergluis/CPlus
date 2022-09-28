#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int x;
printf("Escreva um número inteiro:");
scanf("%i", &x);
if(x > 0)
    printf("O número é positivo!!");
else
if(x < 0)
    printf("O número é negativo!!");
else
    printf("O número é zero");
getch();
}
