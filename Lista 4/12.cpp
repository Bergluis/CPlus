#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float one,two,three;
    printf("Informe o valor do primeiro lado:");
    scanf("%f", &one);
    printf("Informe o valor do segundo lado:");
    scanf("%f", &two);
    printf("Informe o valor do terceiro lado:");
    scanf("%f", &three);
    if(one==two && one==three)
  	printf("O tri�ngulo � equil�tero!");
  	else if(one==two && one!=three || one==three && one!=two||two==three && two!=one)
  	printf("O tri�ngulo � is�sceles!");
    else 
    printf("O tri�ngulo � escaleno!");
    getch();
}

  
