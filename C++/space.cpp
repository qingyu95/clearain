#include<iostream>
using namespace std;
int main()
{
		int *p=NULL;
		p=new int;
		*p=123;
		cout<<*p<<endl;
		delete p;
}
