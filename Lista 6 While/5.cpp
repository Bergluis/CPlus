#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int operacao;
    char oqfazer;
    float num1,num2,resultado;
    
    printf("Novo Cálculo(S) ou Encerrar Programa(N)?");
    scanf("%c",&oqfazer);
    while(oqfazer=='S'||oqfazer=='s')
    {
    printf("Operações:\n");
    printf("1-Soma\n");
    printf("2-Subtração\n");
    printf("3-Multiplicação\n");
    printf("4-Divisão\n");
    printf("Qual o número da operação que você deseja realizar?");
    scanf("%d",&operacao);
    printf("Informe o primeiro número:");
    scanf("%f",&num1);
    printf("Informe o segundo número:");
    scanf("%f",&num2);
    
    if(operacao==1)
    resultado=num1+num2;
    if(operacao==2)
    resultado=num1-num2;
    if(operacao==3)
    resultado=num1*num2;
    if(operacao==4)
    resultado=num1/num2;
    printf("O resultado da operção é:%2.2f\n",resultado);
    printf("Novo Cálculo(S) ou Encerrar Programa(N)?");
    oqfazer=getche();
    }
getch();
}
    
