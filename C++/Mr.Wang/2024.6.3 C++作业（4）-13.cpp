#include <iostream>
using namespace std;
int main(){
	int num=0,g,ge,shi,bai,qian,wan;
	float a;
	cin>>g;
	for(int i=1;i<=g;i++){
		a=i;
		ge=i%10;
		shi=i/10%10;
		bai=i/100;
		qian=i/1000;
		wan=i/10000;
		if(ge==7){
			num+=i;
		}else if(shi==7){
			num+=i;
		}else if(i/7==a/7){
			num+=i;
		}else if(bai==7){
			num+=1;
		}else if(qian==7){
			num+=1;
		}else if(wan==7){
			num+=1;
		}
	}
	cout<<num<<endl;
	return 0;
}
