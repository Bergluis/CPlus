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
    float total,media,notas[10];
    int x,aprovados;
    media=0;
    total=0;
    aprovados=0;
    for(x=0;x<=9;x++)
    {
    	printf("Informe a nota do aluno:");
    	scanf("%f",&notas[x]);
    	if (notas[x]>=6)
    	aprovados++;
    	total=total+notas[x];
    	media=total/10;
    }
    printf("\nO número de alunos aprovados na turma é de:%i",aprovados);
    printf("\nA média da nota dos alunos da turma foi de:%2.2f",media);
    getch();
}
    
