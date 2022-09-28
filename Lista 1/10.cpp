#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float saldo;
float reajuste;
printf("Informe seu saldo:");
scanf("%f", &saldo);
reajuste=(saldo+(saldo*0.08));
printf("O saldo com reajuste de 8% é: %f", reajuste);
getch();
}
