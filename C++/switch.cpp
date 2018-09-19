#include<iostream>
using namespace std;
int main()
{
		cout<<"Please input a&b"<<endl;
		int a,b;
		cin>>a>>b;
		cout<<endl<<"The a is "<<a<<endl<<"The b is "<<b<<endl<<"Switching..."<<endl;
		a=a+b;
		b=a-b;
		a=a-b;
		cout<<"The a is "<<a<<endl<<"The b is "<<b<<endl;
		return 0;
}
