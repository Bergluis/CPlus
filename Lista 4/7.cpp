#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int x,y,z;
printf("Informe o ano em que voc� nasceu:");
scanf("%i", &x);
printf("Informe o ano atual:");
scanf("%i", &y);
if(x>y)
printf("O ano de nascimento � inv�lido!");
else
{
z=y-x;
printf("Sua idade � (Considerando que voc� ja fez anivers�rio esse ano):%i", z);
}
getch();
}
