#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int senha;
    
    printf("Informe a senha:");
    scanf("%d",&senha);
    while(senha!=2011)
    {
    printf("SENHA INVÁLIDA\n");
    printf("Informe a senha:");
    scanf("%d",&senha);
    }
    printf("ACESSO PERMITIDO");
    getch();
}
