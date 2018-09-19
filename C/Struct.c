#include<stdio.h>
void main()
{
	struct File_ 
	{
		char Name[10];
		int Age;
		char School[20];
	}File[3];
	int i=1;
	for(i=1;i<4;i++)
	{
	printf("Now is the %d student.\nPlease type Name:",i);
	scanf("%s",&File[i-1].Name);
	
	printf("Age?\n");
	scanf("%d",&File[i-1].Age);
	
	printf("School?\n");
	scanf("%s",&File[i-1].School);
	}
	
	for(i=0;i<3;i++)
	{
		printf("%s\n%d\n%s\n\n",File[i].Name,File[i].Age,File[i].School);
	}
}
