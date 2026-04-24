#include <iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,4,5};
	int *p;
	p=a;
	int max=*p;
	
while(p<a+5)
	{  
	if(*p>max)
	   max=*p;
	   p++;
	}
	
	cout<<"max="<<max;
	
}
