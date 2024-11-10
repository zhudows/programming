#include <iostream>
using namespace std;
int main() {
//		int a,b,c,d;
//		cin>>a;
//		cin>>b;
//		cin>>c;
//		cin>>d;
//		cout<<d<<" "<<c<<" "<<b<<" "<<a;
//		int  x,y,z,he;
//		cin>>x>>y>>z;
//		x=x*3;
//		y=y*1;
//		z=z*0;
//		he=x+y+z;
//		cout<<he<<endl;
	int n,y,x,t;
	cin>>n>>x>>y;
	t=0;
	if(y%x!=0) {
		t=n-int(y/x)-1;
	} else {
		t=n-int(y/x);
	}
	if(t>0){
		cout<<t<<endl;
	} else {
		cout<<0<<endl;
	}
	return 0;
}
