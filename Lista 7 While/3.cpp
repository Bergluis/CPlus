#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,y;
    y=0;
    do
    {
    	printf("\nInforme um n�mero: ");
    	scanf("%i",&x);
    	y=y+1;
    	x=x*2;
    	printf("\nO dobro do n�mero � %i",x);
	}while(y<10);
	getch();
}
