#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float x;
    int y;
    y=0;
    while(x!=0)
    {
        printf("Informe um n�mero:");
        scanf("%f",&x);
    	if(x>=100 and x<=200)
    	y++;
    }
    printf("O n� de n�meros entre 100 e 200 foi de: %d",y);
}
