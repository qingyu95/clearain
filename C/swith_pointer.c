#include<stdio.h>
void main()
{
	int a,b;
	int *p,*q;
	p = &a;
	q = &b;
	printf("The a is:");
	scanf("%d",p);
	printf("\nThe b is:");
	scanf("%d",q);
	p = &b;
	q = &a;
	printf("\n Now a is %d ,b is %d",*p,*q);
}
