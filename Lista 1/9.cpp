#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float x;
float qp; //QP: quarta parte
printf("Informe um n�mero:");
scanf("%f", &x);
qp= x/4;
printf("A quarta parte do n�mero �: %f", qp);
getch();
}
