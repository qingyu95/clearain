#include<stdio.h>
void main()
{
	FILE *fp,*fo;
	if((fp=fopen("F:\\first.txt","r"))==NULL) printf("Fail\n");
	if((fo=fopen("F:\\seconed.txt","w+"))==NULL) printf("Fail-2\n");
	char c;
	c=fgetc(fp);
	while(c!=EOF)
	{
		fputc(c,fo);
		c=fgetc(fp);
	}
	fclose(fp);
	rewind(fo);
	c=fgetc(fo);
	while(c!=EOF)
	{
		putchar(c);
		c=fgetc(fo);
	}
}
