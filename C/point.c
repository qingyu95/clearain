#include<stdio.h>
void main()
{
	int a,b;
	int *p,*q;
	p = &a;
	q = &b;
	scanf("%d %d",p,q);
	printf("%d %d",*p,*q);
}
