#include<iostream>
using namespace std;
int main()
{
		char *p="This is a test page";
		while(*p!='\0')
		{
				cout << *p;
				p++;
		}
}
