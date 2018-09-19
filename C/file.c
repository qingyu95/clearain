#include<stdio.h>
void main()
{
	FILE *fp;
	if((fp=fopen("F:\\first.txt","a+"))==NULL) printf("SOME ERRORS HAPPENED");
	char c;
	c=getchar();
	while(c!='#')
	{
		fputc(c,fp);
		c=getchar();
	}
	fclose(fp);
	fp=fopen("F:\\first.txt","r");
	char o;
	o=fgetc(fp);
	while(o!=EOF)
	{
		putchar(o);
		o=fgetc(fp);
	}
	fclose(fp);
}
