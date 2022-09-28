#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int sexo;
float altura,pi;//pi=peso ideal
printf("Informe seu sexo(F=1 ou M=2):");
scanf("%i", &sexo);
printf("Informe sua altura exata:");
scanf("%f", &altura);
if(sexo==2)
{
pi=(72.7*altura)-58;
printf("Seu peso ideal é:%2.2f",pi);
}
else
{
pi=(62.1*altura)-44.7;
printf("Seu peso ideal é:%2.2f",pi);
}
getch();
}

