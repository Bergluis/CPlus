#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls"); // limpa a tela
    system ("color 4F"); // cor de fundo azul e letras azuis brilhantes
    int mat[3][3];
    int l,c;
    
    
    for(l=0;l<3;l++)
    {
        for(c=0;c<3;c++)	
        {
        	printf("Informe o valor para a matriz:");
        	scanf("%i",&mat[l][c]);
        }
    }
        for(l=0;l<3;l++)
    {
        for(c=0;c<3;c++)	
        {
        	if (mat[l][c]>=-10 && mat[l][c]<=10)
        	mat[l][c]=100;
            printf(" %i",mat[l][c]);
        }
        printf("\n");
    }
    getch();
}
    
