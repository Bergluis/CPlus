#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float taxa;
float tempo;
float valor;
float pres; //pres: Prestação
printf("Informe o valor do carnê:");
scanf("%f", &valor);
printf("Informe a taxa do carnê:");
scanf("%f", &taxa);
printf("Informe o tempo do atraso(Dias):");
scanf("%f", &tempo);
pres= valor+(valor*(taxa/100)*tempo);
printf("O valor total da prestação é:%f", pres);
getch();
}
