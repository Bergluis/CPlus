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
    int mat[5][5];
    int l,c,cont;
    cont=0;
        for(l=0;l<5;l++)
    {
        for(c=0;c<5;c++)	
        {
        mat[l][c]=0;
        cont=cont+5;
        mat[l][c]=cont;
        }
    }
        for(l=0;l<5;l++)
    {
        for(c=0;c<5;c++)	
        {
            printf(" %i",mat[l][c]);
        }
        printf("\n");
    }
    getch();
}
    
