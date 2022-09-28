#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
  setlocale(LC_ALL,"Portuguese");
  float x;
  printf("Informe um número:");
  scanf("%f", &x);
  if(x>20)
  printf("O número é maior que 20!");
  else if(x<20)
  printf("O número é menor que 20!");
  else
  printf("o número é igual a 20!");
  getch();
}
