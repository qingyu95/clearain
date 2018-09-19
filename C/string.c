#include<stdio.h>
int main(){
	printf("Please type something:\n");
	char *string[10];						//注意，一定要为指针变量先分配够内存，否则错误。可以直接 *string="****"; 
	scanf("%s",string);						//奇怪的地方来了，是不是指针变量都无所谓。。。。？ 
	printf("%s",string); 					//输入七个字符及以前不会再print后有延时，再多的字符就会停几秒？？ 那是【0】时，调大后就没有了 
	return 0;
}
