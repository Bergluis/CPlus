#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float x;
	printf("Informe um número:");
    scanf("%f", &x);
    while(x!=0)
    {
    if (x>0)
    printf("O número é positivo!!\n");
    else{
    printf("O número é negativo!!\n");
    }
    printf("Informe um número:");
    scanf("%f",&x);
    }
}
