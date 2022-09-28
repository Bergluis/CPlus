#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	float x,y;
	printf("Insira um número:");
	scanf("%f", &x);
	printf("Insira outro número:");
	scanf("%f", &y);
	if(x==y)
	printf("Os números são iguais!!");
	else if(x>y)
	printf("O número maior é %2.0f", x);
	else
    printf("O número maior é %2.0f", y);
	getch();
}
