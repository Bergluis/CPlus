#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	float val,ano,valfin;
	setlocale(LC_ALL,"portuguese");
	printf("Valor do seu carro pela tabela FIPE:");
	scanf("%f", &val);
	printf("Ano do seu carro:");
	scanf("%f", &ano);
	if(ano<=1990){
		valfin=(val*0.1);
		printf("A taxa é de R$ %2.2f", valfin);
	}
	if(ano>1990){
	    valfin=(val*0.15);
		printf("A taxa é de R$ %2.2f", valfin);
	}
	getch();
}
