#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	float x,y,f;
	printf("Informe um n�mero:");
	scanf("%f", &x);
	printf("Informe um n�mero:");
	scanf("%f", &y);
	if(x>y){
		f=x-y;
		printf("A diferen�a entre eles � de: %2.2f", f);
	}
	else{
		f=y-x;
		printf("A diferen�a entre eles � de: %2.2f", f);
	}
	getch();
}
