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
printf("O número de maiores de idade é de:%d\n", maiores);
printf("O número de maiores de idade é de:%d", menores);
getch();
}
