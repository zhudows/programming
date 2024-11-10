#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	cout<<fixed<<setprecision(9)<<a/b<<endl;
	scanf("%d %d",&a,&b);
	printf("%.9f",a/b);
	return 0;
}
