#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{	
    setlocale(LC_ALL,"portuguese");
    int x,y,f;    
	printf("Insira um n�mero inteiro:");
	scanf("%d", &x);
	printf("Insira outro n�mero inteiro:");
	scanf("%d", &y);
	f=x+y;
	if(f>10)
	printf("A soma �: %d", f);
}
