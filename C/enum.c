#include<stdio.h>//干，这是假的，完全没用枚举类型
void main()
{
	enum Color{Red,Yellow,Blue} color;
	int i;
	printf("Please enter a number(0-2)\n");
	scanf("%d",&i);
	switch(i)
	{
		case 0:
			printf("The color is Red\n");
			break;
		case 1:
			printf("The color is Yellow\n");
			break;
		case 2:
			printf("The color is Blue\n");
			break;
		default:
			printf("Ahhh,no idea\n");
			break;
	}
}
