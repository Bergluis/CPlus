#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
  setlocale(LC_ALL,"Portuguese");
  float x;
  printf("Informe um n�mero:");
  scanf("%f", &x);
  if(x>20)
  printf("O n�mero � maior que 20!");
  else if(x<20)
  printf("O n�mero � menor que 20!");
  else
  printf("o n�mero � igual a 20!");
  getch();
}
