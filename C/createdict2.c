#include<stdio.h>
void main()
{
	FILE *f;
	int c;
	f=fopen("F:\\dict2.txt","w");
	for(c=0;c<10000;c++) fprintf(f,"cqyc%d\n",c);
	fclose(f);
}
