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
	printf("N�mero de patinhos: ");
	scanf("%i", &x);
	y=x;
	do
	{
		printf("%i",x);
		printf(" patinhos foram passear\n");
		printf("Al�m das montanhas\n");
		printf("Para brincar\n");
		printf("A mam�e gritou: qu�, qu�, qu�, qu�\n");
		x=x-1;
		printf("Mas s� %i",x);
		printf(" patinhos voltaram de l�\n");
	}while(x!=0);
	printf("A mam�e patinha foi procurar\n");
	printf("Al�m das montanhas\n");
	printf("Na beira do mar\n");
	printf("A mam�e gritou: qu�, qu�, qu�, qu�\n");
	printf("E os %i",y);
	printf(" patinhos voltaram de l�!!");
	getch();
}
