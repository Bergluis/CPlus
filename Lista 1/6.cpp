#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int x;
int y;
int produto;
x=20;
y=7;
produto= x*y;
printf("O produto entre 20 e 7 é: %i", produto);
getch();
}
