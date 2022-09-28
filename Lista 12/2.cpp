#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

float areacirculo(float a);
float circcirculo(float a);

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 4F"); // cor de fundo azul e letras azuis brilhantes
    float x,y,z;
    printf("\nInforme o raio do círculo: ");
    scanf("%f", &x);
    while(x>0)
	{
    y=areacirculo(x);
    z=circcirculo(x);
    printf("A área do círculo é %2.2f",y);
    printf("\nA circunferência do círculo é %2.2f",z);
    printf("\nInforme o raio do círculo: ");
    scanf("%f", &x);
	}
    getch();
}
float areacirculo(float a)
{
	float area;
	area=(3.14*(a*a));
	return area;
}
float circcirculo(float a)
{
	float circ;
	circ=(2*3.14*a);
	return circ;
}
