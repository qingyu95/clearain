#include<iostream>
using namespace std;
int main()
{
		char * arry[]={"Hello","COMMAND","OFCOURSE"};
		char * p;
		p=arry[0];
		for(int i=0;i<3;i++,p++)
		{
				while(*p!='\0')
				cout<<*p++;
				cout<<endl;
		}
}
