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
    	x++;
    	printf("\n %i",x);
    	y=y+x;
    }while(x<100);
	printf("\nOs números somados são %i",y);
    getch();
}
