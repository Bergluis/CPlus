#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float x;
	printf("Informe um n�mero:");
    scanf("%f", &x);
    while(x!=0)
    {
    if (x>0)
    printf("O n�mero � positivo!!\n");
    else{
    printf("O n�mero � negativo!!\n");
    }
    printf("Informe um n�mero:");
    scanf("%f",&x);
    }
}
