#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	float result,num1,num2;
	int x;
	setlocale(LC_ALL,"portuguese");
	printf("N�mero:");
	scanf("%f", &num1);
	printf("Outro n�mero (Caso raiz n�o escreva esse)");
	scanf("%f", &num2);
	printf("Opera��o (1+,2-,3*,4/,5raiz):");
    scanf("%i", &x);
    result=0;
	switch(x)
	{
		case 1:
			result=num1+num2;
			break;
		case 2:
			result=num1-num2;
			break;	
		case 3:
			result=num1*num2;
			break;
		case 4:
			result=num1/num2;
			break;
		case 5:
			result=sqrt(num1);
	}
	printf("%f", result);
	getch();
}
