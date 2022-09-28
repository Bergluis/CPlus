#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float x;
float qp; //QP: quarta parte
printf("Informe um número:");
scanf("%f", &x);
qp= x/4;
printf("A quarta parte do número é: %f", qp);
getch();
}
