#include<stdio.h>
#define COMPOSE(a,b) (a*b)
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("\n%d",COMPOSE(a,b));
	printf("\n%s\n%d\n%s\n%s",__FILE__,__LINE__,__DATE__,__TIME__);
	if(__STDC__==1) printf("\n The file is static C");
}
