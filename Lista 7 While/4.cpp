#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,y;
    printf("Informe um número: ");
    scanf("%i",&x);
    y=0;
    do
    {
    	y++;
    	printf("\n %i",y);
	}while(y<x);
	getch();
}
