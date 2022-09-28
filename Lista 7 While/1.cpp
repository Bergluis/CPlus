#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x;
    do
    {
    x=x+2;
    printf("\n %i",x);
    }while(x<200);
    getch();
}
