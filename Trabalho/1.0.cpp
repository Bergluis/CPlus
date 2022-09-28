#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("cls");
    system ("color 2A");
    float mat[3][5],met[2][5],total;
    int l,c,i,b,a;
    i=0;
    a=0;
    b=0;
    total=0;
    for(l=0;l<3;l++)
    {
        for(c=0;c<5;c++)	
        {	
            if(l==0)//Testa a linha em que se encontra a matriz para incluir os valores
			{
                i++;	
                printf("Informe a quantidade de produto %i",i);//Vendedor vende quantidade N de tal produto
		        printf(" que você vendeu: ");
		        scanf("%f", &mat[l][c]);
		    }
			if(l==1)
			{
				a++;
				printf("Informe o preço que você vendeu o produto %i",a);//Vendedor informa a que valor efetua a venda
				printf(":");
				scanf("%f", &mat[l][c]);
			}
			if(l==2)
			{
				b++;
				printf("Informe o preço a fabricante cobra sobre o produto %i",b);//Vendedor informa o preço de custo
				printf(":");
				scanf("%f", &mat[l][c]);
			}
        }
    }
    b=0;
    for(l=0;l<1;l++)
    {
		for(c=0;c<5;c++)
		{
			met[l][c]=0;//Número do produto
			b++;
			met[l][c]=b;
		}
    }
    met[1][0]=(mat[0][0])*(mat[1][0])-(mat[0][0])*(mat[2][0]);//Calculo o Líquido para o valor recebido
    met[1][1]=(mat[0][1])*(mat[1][1])-(mat[0][1])*(mat[2][1]);
    met[1][2]=(mat[0][2])*(mat[1][2])-(mat[0][2])*(mat[2][2]);
    met[1][3]=(mat[0][3])*(mat[1][3])-(mat[0][3])*(mat[2][3]);
    met[1][4]=(mat[0][4])*(mat[1][4])-(mat[0][4])*(mat[2][4]);
    for(l=0;l<1;l++)
    {
        for(c=0;c<5;c++)	
        {
        	printf("Produto--> %2.0f",met[0][c]);//Imprime matriz final com o recebido
        	printf(" %2.2f",met[1][c]);
        	if(met[1][c]>0)
        	printf("  <--Lucro\n");
        	if(met[1][c]<0)
        	printf("  <--Prejuízo\n");
        	if(met[1][c]==0)
			printf("  <--Sem ganho\n");
			total=total+met[1][c];
        }
    }
    if(total<0)
    printf("Prejuíso R$ %2.2f",total);
    if(total==0)
    printf("Nenhum Ganho");
    if(total>0)
    printf("Total recebido R$ %2.2f",total);//Valor total recebido com o dia de trabalho
    getch();
}
    
