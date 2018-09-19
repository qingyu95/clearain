#include<stdio.h>
#line 8 "otherline.c"
void main()			//这是上面定义的第一行，从下一行开始 
{
	printf("%d",__LINE__);
	printf("\n%d",__LINE__);
	printf("\n%s",__FILE__);		//__FILE__已经变为了定义的"otherline.c" 
}
