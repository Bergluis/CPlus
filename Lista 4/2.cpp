#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	float x,y;
	printf("Insira um n�mero:");
	scanf("%f", &x);
	printf("Insira outro n�mero:");
	scanf("%f", &y);
	if(x==y)
	printf("Os n�meros s�o iguais!!");
	else if(x>y)
	printf("O n�mero maior � %2.0f", x);
	else
    printf("O n�mero maior � %2.0f", y);
	getch();
}
