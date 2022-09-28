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
	printf("Informe o raio do círculo: ");
    scanf("%f", &x);
    y=areacirculo(x);
    z=circcirculo(x);
    printf("A área do círculo é %2.2f",y);
    printf("\nA circunferência do círculo é %2.2f",z);
    getch();
}
float areacirculo(float a)
{
	float area;
	area=(3.14*(a^2));
	return area;
}
float circcirculo(float a)
{
	float circ;
	circ=(2*3.14*a);
	return circ;
}
