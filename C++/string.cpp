#include<iostream>
using namespace std;
int main()
{
		char *p,*q;
		char str1[100],str2[100]={0};
		cout << "Please insert a string"<<endl;
		gets(str1);
		cout << "Another "<<endl;
		gets(str2);
		p=str1;
		q=str2;
		while(*p!='\0') p++;
		while(*q!='\0') *p++=*q++;
		*p='\0';
		printf("\n");
		puts(str1);
}

