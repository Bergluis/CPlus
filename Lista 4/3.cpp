#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
  setlocale(LC_ALL,"Portuguese");
  int x;
  printf("Informe um n�mero inteiro:");
  scanf("%i", &x);
  if(x%3==0 && x%7==0)
  printf("O n�mero � divis�vel por 3 e 7!");
  else
  printf("O n�mero n�o � divis�vel por 3 e 7!");
  getch();
}
