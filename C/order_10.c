#include<stdio.h>
int main()
{
		int arry[10],fin[10];
		int * p;
		p=&arry[0];
		for(int i=0;i<10;i++) {scanf("%d",p);p++;}
		for(int i=0;i<10;i++)
		{
				p=&arry[i];
				int num = 0;
				for(int n=0;n<10;n++)
				{
						if(*p>arry[n]) num++;
				}
				fin[num]=*p;
		}
		for(int i=0;i<10;i++) printf("%d  ",arry[i]);
		printf("\n");
		for(int i=0;i<10;i++) printf("%d  ",fin[i]);
		return 0;
}
