#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade,maiores,menores;
    printf("Informe sua idade:");
    scanf("%d",&idade);
    maiores=0;
    menores=0;
    while(idade>0)
{
    if(idade>=18)
    maiores++;
    else{
    menores++;
    }
    printf("Informe sua idade:");
    scanf("%d",&idade);
}
printf("O n�mero de maiores de idade � de:%d\n", maiores);
printf("O n�mero de maiores de idade � de:%d", menores);
getch();
}
