 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float b;
float h;
float per;
float area;
printf("Informe a altura do ret�ngulo:");
scanf("%f", &h);
printf("Informe a base do ret�ngulo:");
scanf("%f", &b);
per=(2*h+2*b);
area=(h*b);
printf("A �rea do ret�ngulo �: %f\n", area);
printf("O per�metro do ret�ngulo �: %f", per);
getch();
}

