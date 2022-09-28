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
printf("Informe a altura do retângulo:");
scanf("%f", &h);
printf("Informe a base do retângulo:");
scanf("%f", &b);
per=(2*h+2*b);
area=(h*b);
printf("A área do retângulo é: %f\n", area);
printf("O perímetro do retângulo é: %f", per);
getch();
}

