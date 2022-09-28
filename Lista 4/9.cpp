#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int senha;
printf("Digite a senha:");
scanf("%i", &senha);
if(senha==1234)
printf("ACESSO PRMITIDO.");
else
printf("ACESSO NEGADO.");
getch();
}
