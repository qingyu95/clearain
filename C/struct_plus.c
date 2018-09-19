#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int age;
	struct student *pNext;
};
int i;
struct student * Create()
{
	struct student * pHead = NULL;
	struct student * pEnd,* pNew;
	i =0;
	pEnd=pNew=(struct student * )malloc(sizeof(struct student));
	printf("Please first enter Name,then Age:\n");
	scanf("%s",&pNew->name);
	scanf("%d",&pNew->age);
	while(pNew->age!=0)
	{
		i++;
		if(i==1)
		{
			pNew->pNext=NULL;
			pEnd=pNew;
			pHead=pNew;
		}
		else
		{
			pNew->pNext=NULL;
			pEnd->pNext=pNew;
			pEnd=pNew;
		}
		pNew=(struct student * )malloc(sizeof(struct student));
		scanf("%s",&pNew->name);
		scanf("%d",&pNew->age);
	}
	free(pNew);
	return pHead;
}
void Print(struct student * pHead)
{
	struct student * pTemp;
	int num=1;
	printf("\n/*********The toatal number is %d*********/ \n\n",num);
	pTemp = pHead;
	while(pTemp!=NULL)
	{
		printf("The NO%d student's file is:\n",num);
		printf("NAME:%s\n",pTemp->name);
		printf("AGE:%d\n\n",pTemp->age);
		pTemp=pTemp->pNext;
		num++; 
	}
}

void main()
{
	struct student * pHead;
	pHead=Create();
	Print(pHead);
}
