#include<stdio.h>
int main()				//这是将整型右移后出去的，加在左边。 
{
	int a=31;
	printf("%X\n",a);
	int b=a<<28;
	int c=a>>4;
	int d=((b>>1)^0x80000000)>>23;		//非常重要，最高位是符号位，0为正，1为负，左移位时若不小心将最高位移为了1，那右移将出现问题，就成负数，补位1了。 
	a=b|c;
	printf("%X",a); 
	return 0;
}

