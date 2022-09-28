#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<windows.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char kkk[1000];
	FILE *f;
	int x,a;
	f = fopen("crip.txt", "w");
	printf("");
	gets(kkk);
	a=strlen(kkk);
	for(x=0;x<=a;x++)
    {
        if (kkk[x]=='a' or kkk[x]=='A')
        kkk[x]='c';
        else
        if (kkk[x]=='b' or kkk[x]=='B')
        kkk[x]='v';
        else
        if (kkk[x]=='c' or kkk[x]=='C')
        kkk[x]='f';
        else
        if (kkk[x]=='d' or kkk[x]=='D')
        kkk[x]='ã';
        else
        if (kkk[x]=='e' or kkk[x]=='E')
        kkk[x]='6';
        else
        if (kkk[x]=='f' or kkk[x]=='F')
        kkk[x]='p';
        else
        if (kkk[x]=='g' or kkk[x]=='G')
        kkk[x]='i';
        else
        if (kkk[x]=='h' or kkk[x]=='H')
        kkk[x]='é';
        else
        if (kkk[x]=='i' or kkk[x]=='I')
        kkk[x]='l';
        else
        if (kkk[x]=='j' or kkk[x]=='J')
        kkk[x]='0';
        else
        if (kkk[x]=='k' or kkk[x]=='K')
        kkk[x]='g';
        else
        if (kkk[x]=='l' or kkk[x]=='L')
        kkk[x]='a';
        else
        if (kkk[x]=='m' or kkk[x]=='M')
        kkk[x]='í';
        else
        if (kkk[x]=='n' or kkk[x]=='N')
        kkk[x]='o';
        else
        if (kkk[x]=='o' or kkk[x]=='O')
        kkk[x]='2';
        else
        if (kkk[x]=='p' or kkk[x]=='P')
        kkk[x]='õ';
        else
        if (kkk[x]=='q' or kkk[x]=='Q')
        kkk[x]='â';
        else
        if (kkk[x]=='r' or kkk[x]=='R')
        kkk[x]='ú';
        else
        if (kkk[x]=='s' or kkk[x]=='S')
        kkk[x]='1';
        else
        if (kkk[x]=='t' or kkk[x]=='T')
        kkk[x]='e';
        else
        if (kkk[x]=='u' or kkk[x]=='U')
        kkk[x]='à';
        else
        if (kkk[x]=='v' or kkk[x]=='V')
        kkk[x]='á';
        else
        if (kkk[x]=='w' or kkk[x]=='W')
        kkk[x]='ó';
        else
        if (kkk[x]=='x' or kkk[x]=='X')
        kkk[x]='ô';
        else
        if (kkk[x]=='y' or kkk[x]=='Y')
        kkk[x]='b';
        else
        if (kkk[x]=='z' or kkk[x]=='Z')
        kkk[x]='3';
        else
        if (kkk[x]=='á' or kkk[x]=='Á')
        kkk[x]='7';
        else
        if (kkk[x]=='ã' or kkk[x]=='Ã')
        kkk[x]='j';
        else
        if (kkk[x]=='à' or kkk[x]=='À')
        kkk[x]='m';
        else
        if (kkk[x]=='â' or kkk[x]=='Â')
        kkk[x]='8';
        else
        if (kkk[x]=='é' or kkk[x]=='É')
        kkk[x]='q';
        else
        if (kkk[x]=='í' or kkk[x]=='Í')
        kkk[x]='s';
        else
        if (kkk[x]=='ó' or kkk[x]=='Ó')
        kkk[x]='4';
        else
        if (kkk[x]=='ô' or kkk[x]=='Ô')
        kkk[x]='n';
        else
        if (kkk[x]=='õ' or kkk[x]=='Õ')
        kkk[x]='d';
        else
        if (kkk[x]=='ú' or kkk[x]=='Ú')
        kkk[x]='5';
        else
        if (kkk[x]=='0')
        kkk[x]='9';
        else
        if (kkk[x]=='1')
        kkk[x]=',';
        else
        if (kkk[x]=='2')
        kkk[x]='k';
        else
        if (kkk[x]=='3')
        kkk[x]='r';
        else
        if (kkk[x]=='4')
        kkk[x]='t';
        else
        if (kkk[x]=='5')
        kkk[x]=' ';
        else
        if (kkk[x]=='6')
        kkk[x]='w';
        else
        if (kkk[x]=='7')
        kkk[x]='z';
        else
        if (kkk[x]=='8')
        kkk[x]='.';
        else
        if (kkk[x]=='9')
        kkk[x]='x';
        else
        if (kkk[x]==' ')
        kkk[x]='u';
        else
        if (kkk[x]==',')
        kkk[x]='h';
        else
        if (kkk[x]=='.')
        kkk[x]='y';
    }
    fputs(kkk,f);
	fclose(f);
	puts(kkk);
	return 0;
}
