#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
    float x;
    float raiz;
    float quadrado;
    printf("Escreva um n�mero inteiro:");
    scanf("%f", &x);
    if(x > 0){
        raiz=sqrt(x);
        printf("A raiz do n�mero � : %2.0f", raiz);
}
    else if(x < 0){
        quadrado=(x*x);
        printf("O quadrado do n�mero � : %2.0f", quadrado);  
}
    getch();

}
