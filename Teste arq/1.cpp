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
	FILE *f;
	f = fopen("1cripa.txt", "w");//w=write r=read a=anexar
	    fprintf(f,"BaDumTis!");
	    fprintf(f,"\n...Craa!");
	    fclose(f);
	    return 0;
}
