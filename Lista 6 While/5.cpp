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
    
    printf("Novo C�lculo(S) ou Encerrar Programa(N)?");
    scanf("%c",&oqfazer);
    while(oqfazer=='S'||oqfazer=='s')
    {
    printf("Opera��es:\n");
    printf("1-Soma\n");
    printf("2-Subtra��o\n");
    printf("3-Multiplica��o\n");
    printf("4-Divis�o\n");
    printf("Qual o n�mero da opera��o que voc� deseja realizar?");
    scanf("%d",&operacao);
    printf("Informe o primeiro n�mero:");
    scanf("%f",&num1);
    printf("Informe o segundo n�mero:");
    scanf("%f",&num2);
    
    if(operacao==1)
    resultado=num1+num2;
    if(operacao==2)
    resultado=num1-num2;
    if(operacao==3)
    resultado=num1*num2;
    if(operacao==4)
    resultado=num1/num2;
    printf("O resultado da oper��o �:%2.2f\n",resultado);
    printf("Novo C�lculo(S) ou Encerrar Programa(N)?");
    oqfazer=getche();
    }
getch();
}
    
