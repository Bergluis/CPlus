#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
float a,b,c;
printf("Informe o primeiro número:");
scanf("%f",&a);
printf("Informe o segundo número:");
scanf("%f",&b);
printf("Informe o terceiro número:");
scanf("%f",&c);
if(a<b && a<c)
printf("O menor número é:%2.0f",a);
else if(b<a && b<c)
printf("O menor número é:%2.0f",b);
else
printf("O menor número é:%2.0f",c);
if(a<100 || b<100 || c<100)
printf("\nO menor número é menor que 100!");
getch();
}
