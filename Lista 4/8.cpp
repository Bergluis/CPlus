#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int sexo,idade;
printf("Informe seu sexo(M=1 e F=2)");
scanf("%i", &sexo);
printf("Informe sua idade:");
scanf("%i", &idade);
if(sexo=2 && idade<25)
printf("ACEITA");
else
printf("NÃO ACEITA");
getch();
}

