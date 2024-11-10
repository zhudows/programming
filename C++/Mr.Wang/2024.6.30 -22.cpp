#include <iostream>
using namespace std;
int main(){
//	int shu=0;
//	for(int i=1;i<=9;i++){
//		for(int j=1;j<=i;j++){
//			shu=i*j;
//			cout<<j<<"*"<<i<<"="<<shu<<" ";
//		}
//		cout<<endl;
//	}
	int qian=0,qian1=0;
	float qian2=0;
	for(int i=1;i<=33;i++){
		for(int j=1;j<=50;j++){
			for(int x=1;x<=100;x++){
				qian=i*3;
				qian1=j*2;
				qian2=x/0.3;
				if(i+j+x==100&&qian1+qian2+qian==100){
					cout<<i<<" "<<j<<" "<<x<<endl;
				}
			}
		}
	}
	int k;
	for(int i=1;i<=33;i++){
		for(int j=1;j<=50;j++){
			k=100-i-j;
			if(i+j+k==100&&i*3+j*2+k/3.0==100){
				cout<<i<<" "<<j<<" "<<k<<endl;
			}
		}
	}
	return 0;
}
