#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
  setlocale(LC_ALL,"Portuguese");
  float a,b,c,operacao1,operacao2,operacao3;
  printf("Informe o prmeiro n�mero:");
  scanf("%f", &a);
  printf("Informe o segundo n�mero:");
  scanf("%f", &b);
   printf("Informe o terceiro n�mero:");
  scanf("%f", &c);
  
  if(a>0){
  operacao1=sqrt(a);
  printf("A raiz quadrada do primeiro n�mero �:%2.2f",operacao1);
  }
  if(a<0){
  operacao1=(a*a);
  printf("O quadrado do n�mero �:%2.2f",operacao1);
  }
  if(b>10 && b<100)
  printf("\nO n�mero est� entre 10 e 100-Intervalo Permitido.");
  
  if(c<b){
  operacao3=b-c;
  printf("\nA diferen�a entre os dois �ltimos n�meros �:%2.2f",operacao3);
  }
  else{
  operacao3=c+1;
  printf("\nO terceiro n�mero adicionado a 1 �:%2.0f",operacao3);
  }
  getch();
}
  
    
  
