#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b;
	double num;
	cin>>a>>b;
	num=a/b;
	cout<<fixed<<setprecision(9)<<num;
	return 0;
}
