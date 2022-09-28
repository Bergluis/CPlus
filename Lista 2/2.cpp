#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float b;
float h;
float area;
printf("Informe a altura do triângulo:");
scanf("%f", &h);
printf("Informe a base do triângulo:");
scanf("%f", &b);
area=(h*b)/2;
printf("A área do triângulo é: %f\n", area);
getch();
}

