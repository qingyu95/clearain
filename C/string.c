#include<stdio.h>
int main(){
	printf("Please type something:\n");
	char *string[10];						//ע�⣬һ��ҪΪָ������ȷ��乻�ڴ棬������󡣿���ֱ�� *string="****"; 
	scanf("%s",string);						//��ֵĵط����ˣ��ǲ���ָ�����������ν���������� 
	printf("%s",string); 					//�����߸��ַ�����ǰ������print������ʱ���ٶ���ַ��ͻ�ͣ���룿�� ���ǡ�0��ʱ��������û���� 
	return 0;
}
