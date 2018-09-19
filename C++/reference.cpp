#include<iostream>
using namespace std;
int get()
{
		int i=3;
		return i;
}

int main()
{
		int k = 4;
		int & k_ = k;
		int && i_ = get()+4;
		int n=get()+1+4;
		cout<<k_<<"   "<<i_<<"   "<<n<<endl;
}

