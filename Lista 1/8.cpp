#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"Portuguese");
int x;
int ant;
int suc;
printf("Informe um número:");
scanf("%i", &x);
ant= x-1;
suc= x+1;
printf("O antecessor do número é: %i\n ", ant );
printf(" O sucessor do número é: %i", suc);
getch();

}
