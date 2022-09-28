#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float valor;
float valorfin;
printf("O valor R$ ");
scanf("%f", &valor);
valorfin=valor-(valor*0.10);
printf("Você tem que pagar R$ %2.0f", valorfin);
getch();
}
