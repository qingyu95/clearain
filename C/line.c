#include<stdio.h>
#line 1 "otherline.c"
void main()			//�������涨��ĵ�һ�У�����һ�п�ʼ 
{
	printf("%d",__LINE__);
	printf("\n%d",__LINE__);
	printf("\n%s",__FILE__);		//__FILE__�Ѿ���Ϊ�˶����"otherline.c" 
}
