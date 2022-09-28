#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int y,x;
    x=0;
	printf("Número de patinhos: ");
	scanf("%i", &x);
	y=x;
	do
	{
		printf("%i",x);
		printf(" patinhos foram passear\n");
		printf("Além das montanhas\n");
		printf("Para brincar\n");
		printf("A mamãe gritou: quá, quá, quá, quá\n");
		x=x-1;
		printf("Mas só %i",x);
		printf(" patinhos voltaram de lá\n");
	}while(x!=0);
	printf("A mamãe patinha foi procurar\n");
	printf("Além das montanhas\n");
	printf("Na beira do mar\n");
	printf("A mamãe gritou: quá, quá, quá, quá\n");
	printf("E os %i",y);
	printf(" patinhos voltaram de lá!!");
	getch();
}
