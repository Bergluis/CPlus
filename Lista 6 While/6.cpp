#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,y,z,cal;
    char oqfazer;
    float preco;
    printf("1-Vegetariano 180 Kcal – R$ 8.50\n");
    printf("2-Peixe 230 Kcal – R$ 12.30\n");
    printf("3-Frango 250 Kcal – R$ 7.50\n");
    printf("4-Carne 350 Kcal – R$ 10.50\n\n");
    printf("1-Abacaxi 75 Kcal – R$ 1.50\n");
    printf("2-Sorvete diet 110 Kcal – R$ 3.50\n");
    printf("3-Mousse diet 170 Kcal – R$ 3.00\n");
    printf("4-Mousse chocolate 200 Kcal – R$ 2.50\n\n");
    printf("1-Chá 20 Kcal – R$ 1.00\n");
    printf("2-Suco de Laranja 70 Kcal – R$ 2.50\n");
    printf("3-Suco de Melão 100 Kcal – R$ 3.00\n");
    printf("4-Refri diet 65 Kcal – R$ 2.00\n\n");
    
    printf("Fazer pedido?(S ou N)");
    scanf("%c",&oqfazer);
    
    while(oqfazer=='S'||oqfazer=='s')
    {
    printf("Escolha o número do seu prato:");
    scanf("%d",&x);
    printf("Escolha o número da sua sobremesa:");
    scanf("%d",&y);
    printf("Escolha o número da sua bebida:");
    scanf("%d",&z);
    switch(x)
   {
        case 1:
    preco=8.50;
    cal=180;
    printf("Você optou Vegetariano + ");
    break;
        case 2:
    preco=12.30;
    cal=230;
    printf("Você optou Peixe + ");
    break;
        case 3:
    preco=7.50;
    cal=250;
    printf("Você optou Frango + ");
    break;
        case 4:
    preco=10.50;
    cal=350;
    printf("Você optou Carne + ");
    break;
    default:
    printf("Número do prato é inválido\n");
   }
   switch(y)
   {
        case 1:
    preco=preco+1.50;
    cal=cal+75;
    printf("Abacaxi + ");
    break;
        case 2:
    preco=preco+3.50;
    cal=cal+110;
    printf("Sorvete diet + ");
    break;
        case 3:
    preco=preco+3.00;
    cal=cal+170;
    printf("Mousse diet + ");
    break;
        case 4:
    preco=preco+2.50;
    cal=cal+200;
    printf("Mousse chocolate + ");
    break;
    default:
    printf("Número da sobremesa é inválido");
    } 
       switch(z)
   {
        case 1:
    preco=preco+1.00;
    cal=cal+20;
    printf("Chá");
    break;
        case 2:
    preco=preco+2.50;
    cal=cal+70;
    printf("Suco de Laranja");
    break;
        case 3:
    preco=preco+3.00;
    cal=cal+100;
    printf("Suco de Limão");
    break;
        case 4:
    preco=preco+2.00;
    cal=cal+75;
    printf("Refri diet");
    break;
    default:
    printf("Número da sobremesa é inválido");
    } 
    printf("\nSeu prato custa R$:%2.2f",preco);
    printf("\nSeu prato possui:(Kcal)%d\n",cal);
    printf("\nFazer pedido?(S ou N)\n");
    oqfazer=getche();
}
    getch();
}
    
    
