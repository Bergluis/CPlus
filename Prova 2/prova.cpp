#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

float maiorpeso(float a,float b);
float mediapeso(float a,float b,int c);
float quantmeninas(float a,float b);
float quantmeninos(float a,float b);

main()
{
    setlocale(LC_ALL,"Portuguese");
    //char sexo; estava dando problema!
	float peso,a,b,c,d;
    int x,y;
    for(x=0;x<5;x++)
    {
	    printf("\nInforme o sexo do aluno %i (M=1 ou F=2): ",x+1);
    	scanf("%i", &y);
    	printf("\nInforme o peso do aluno: ");
    	scanf("%f", &peso);
		a=maiorpeso(peso,a);  
		if(y==1)
			b=quantmeninos(peso,b);
		if(y==2)
			c=quantmeninas(peso,c);
		d=mediapeso(d,peso,x);  
    }
    printf("\nO maior peso é: %2.2f", a);
    printf("\nA média dos pesos é: %2.2f", d);
    printf("\n%0.0f meninas estão com mais de 50Kg", c);
    printf("\n%0.0f meninos estão com mais de 60Kg", b);
}

float maiorpeso(float a,float b)
{
	if(a>b)
	return a;
	else
	return b;
}

float mediapeso(float a,float b,int c)
{
	if(c<4)
	{
	    a=b+a;
	    return a;
    }
    if(c=4)
    {
    	a=b+a;
    	a=a/5;
    	return a;
    }
}

float quantmeninas(float a,float b)
{
	if(a>50)
	b++;
	return b;
}

float quantmeninos(float a,float b)
{
	if(a>60)
	b++;
	return b;
}
