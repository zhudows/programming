#include <iostream>
using namespace std;
int main(){
	int m,d;
	cin>>m>>d;
	if(m<=12&&m>0&&d>0&&d<=31){
		if(m<10||d<10){
			if(m<10&&d<10){
				cout<<0<<m<<"-"<<0<<d<<endl;
			}else if(m<10){
				cout<<0<<m<<"-"<<d<<endl;
			}else if(d<10){
				cout<<m<<"-"<<0<<d<<endl;
			}
		}else{
			cout<<m<<"-"<<d<<endl;
		}
	}else{	
		cout<<"日期不合法"<<endl;
	}
	return 0;
}
