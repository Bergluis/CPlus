#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
  setlocale(LC_ALL,"Portuguese");
  int x;
  printf("Informe um número:");
  scanf("%i", &x);
  if(x%10==0)
  printf("É divisível por 10!\n");
  else
  printf("Não é divisível por 10!\n");
  if(x%5==0)
  printf("É divisível por 5!\n");
  else
  printf("Não é divisível por 5!\n");
  if(x%2==0)
  printf("É divisível por 2!\n");
  else
  printf("Não é divisível por 2!");
  getch();
}
