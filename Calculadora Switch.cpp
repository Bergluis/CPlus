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
	printf("Número:");
	scanf("%f", &num1);
	printf("Outro número (Caso raiz não escreva esse)");
	scanf("%f", &num2);
	printf("Operação (1+,2-,3*,4/,5raiz):");
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
