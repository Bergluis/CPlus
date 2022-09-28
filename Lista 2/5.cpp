#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float sal;
float rea;
float salrea;
printf("Insira o salário: ");
scanf("%f", &sal);
printf("Insira a taxa: ");
scanf("%f", &rea);
salrea=sal+(sal*(rea/100));
printf("O salário reajustado é :%f", salrea);
getch();
}
