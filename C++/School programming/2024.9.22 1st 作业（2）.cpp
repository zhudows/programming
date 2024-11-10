#include <iostream>
using namespace std;
int main(){
	int minute=0,s,h,m;
	cin>>minute;
	h=minute/3600;
	m=(minute-h*3600)/60;
	s=minute-h*3600-m*60;
	if(h<10){
		cout<<"0";
	}
	cout<<h<<":";
	if(m<10){
		cout<<"0";
	}
	cout<<m<<":";
	if(s<10){
		cout<<"0";
	}
	cout<<s<<endl;
	return 0;
}