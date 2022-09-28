#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float gas;
float tot;
printf("Valor da Comanda:");
scanf("%f", &gas);
tot=gas+(gas*0.1);
printf("Valor total: %f", tot);
getch();
}
