#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double ping=0,ping2=0;
	int n=0,a=1;
	cin>>n;
	for(int i=100;i<=999;i++){
		ping=sqrt(i);
		ping2=int(ping);
	//	cout<<i<<endl;
	//	cout<<ping<<endl<<ping2<<endl;
	if(ping==ping2&&(i%10==i/100||i/10%10==1/100||i%10==i/100)){
//		cout<<i<<endl;
		if(a==n){
			cout<<i<<endl;
			break;	
		}
		a++;
	}
	}
	return 0;
}
