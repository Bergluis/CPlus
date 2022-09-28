#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	float sal,salfin;
	setlocale(LC_ALL,"portuguese");
	printf("Informe o valor do saldo:");
	scanf("%f", &sal);
	if(sal>=0 && sal<=200)
	printf("Nenhum crédito!!!");
	if(sal>200 && sal<=400){
	salfin=sal+(sal*0.2);
	printf("O saldo final é R$ %2.2f", salfin);
	}
	if(sal>400 && sal<=600){
	salfin=sal+(sal*0.3);
	printf("O saldo final é R$ %2.2f", salfin);
    }
   	if(sal>600){
	salfin=sal+(sal*0.4);
	printf("O saldo final é R$ %2.2f", salfin);
    }
    getch();
}
