#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    char x;
    float y,z,res;
    do
    {
	printf("\nInforme um n�mero: ");
    scanf("%f",&y);
    printf("Informe outro numero: ");
    scanf("%f",&z);
    while(z==0)
    {
    	printf("Informe o segundo n�mero novamente: ");
    	scanf("%f",&z);
	}
	res=y/z;
    printf("A divis�o entre os n�meros � %2.2f \n",res);
    printf("Outro c�lculo? (S/N)");
    x=getche();
    }while(x=='S'||x=='s');
    getch();
}
