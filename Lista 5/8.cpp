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
	printf("Operação que deseja fazer(1+,2-,3*,4/):");
    scanf("%i", &x);
	printf("Número:");
	scanf("%f", &num1);
	printf("Outro número");
	scanf("%f", &num2);
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
	}
	printf("%f", result);
	getch();
}
