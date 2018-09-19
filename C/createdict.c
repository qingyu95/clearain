#include<stdio.h>
void main()
{
	FILE *f;
	int c;
	f=fopen("F:\\dict.txt","a+");
	for(c=60000000;c<70000000;c++) fprintf(f,"\n%d",c);
	fclose(f);
}
