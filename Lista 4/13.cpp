#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
  setlocale(LC_ALL,"Portuguese");
  float a,b,c,operacao1,operacao2,operacao3;
  printf("Informe o prmeiro número:");
  scanf("%f", &a);
  printf("Informe o segundo número:");
  scanf("%f", &b);
   printf("Informe o terceiro número:");
  scanf("%f", &c);
  
  if(a>0){
  operacao1=sqrt(a);
  printf("A raiz quadrada do primeiro número é:%2.2f",operacao1);
  }
  if(a<0){
  operacao1=(a*a);
  printf("O quadrado do número é:%2.2f",operacao1);
  }
  if(b>10 && b<100)
  printf("\nO número está entre 10 e 100-Intervalo Permitido.");
  
  if(c<b){
  operacao3=b-c;
  printf("\nA diferença entre os dois últimos números é:%2.2f",operacao3);
  }
  else{
  operacao3=c+1;
  printf("\nO terceiro número adicionado a 1 é:%2.0f",operacao3);
  }
  getch();
}
  
    
  
