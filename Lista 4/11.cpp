#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float a,b,c;
printf("Informe o primeiro n�mero:");
scanf("%f",&a);
printf("Informe o segundo n�mero:");
scanf("%f",&b);
printf("Informe o terceiro n�mero:");
scanf("%f",&c);
if(a<b && a<c)
printf("O menor n�mero �:%2.0f",a);
else if(b<a && b<c)
printf("O menor n�mero �:%2.0f",b);
else
printf("O menor n�mero �:%2.0f",c);
if(a<100 || b<100 || c<100)
printf("\nO menor n�mero � menor que 100!");
getch();
}
