#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int x,y,z;
printf("Informe o ano em que você nasceu:");
scanf("%i", &x);
printf("Informe o ano atual:");
scanf("%i", &y);
if(x>y)
printf("O ano de nascimento é inválido!");
else
{
z=y-x;
printf("Sua idade é (Considerando que você ja fez aniversário esse ano):%i", z);
}
getch();
}
