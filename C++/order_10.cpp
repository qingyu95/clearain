#include<iostream>
using namespace std;
int main()
{
		int arry[10],fin[10]={0};
		int * p;
		p=&arry[0];
		for(int i=0;i<10;i++) {cin>>*(p++);}
		p=&arry[0];
		for(int i=0;i<10;i++,p++)
		{
				int num=0;
				for(int n=0;n<10;n++)
				{
						if(*p>arry[n]) num++;
				}
				fin[num]=*p;
		}
		for(int i=0;i<10;i++)
		{
			if(fin[i]==0)
			fin[i]=fin[i-1];
		}
		for(int i=0;i<10;i++) cout<<arry[i]<<"  ";
		cout<<endl;
		for(int i=0;i<10;i++) cout<<fin[i]<<"  ";
		return 0;
}
