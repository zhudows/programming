#include <iostream>
using namespace std;
int main()
{
	int a,b;   
	int a1=0,b1=0,c=0;
	cin>>a;
	for(int i=1;i<=a;i++) {
		cin>>b;
		if(b==1)	
			a1++;
		if(b==5)	
			b1++;
		if(b==10)	
			c++;
	}
	cout<<a1<<endl<<b1<<endl<<c<<endl;
	return 0;
}
