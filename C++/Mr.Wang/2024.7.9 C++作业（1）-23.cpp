#include <iostream>
using namespace std;
int main(){
	int num,shu,ci=0,temp;
	cin>>num;
	for(int i=1;i<=num;i++){
		temp=i;
		while(temp!=0){
			if(temp%10==1){
				ci++;
			}
			temp=temp/10;
		}
	}
	cout<<ci<<endl;
	return 0;
}
/*
	cin>>num1;
	shi=num1/10%10;
	bai=num1/100;
	qian=num1/1000;
	wan=num1/10000;
	if(shi==1||bai==1||qian==1||wan==1||num1==1){
		ci++;
	}
*/
