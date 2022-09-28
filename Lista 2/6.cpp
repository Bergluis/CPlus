#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float cel;
float fah;
printf("Insira a temperatura em °C:");
scanf("%f", &cel);
fah=(1.8*cel)+32;
printf("A temperatura em Fahrenheit é: %f", fah);
getch();
}
