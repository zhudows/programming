#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main(){
//	int a,b,s=0;
//	cin>>a>>b;
//	s=a+b;
//	cout<<setw(10)<<a<<endl;
//	cout<<setw(4)<<"+"<<setw(6)<<b<<endl;
//	cout<<"----------"<<endl;
//	cout<<setw(10)<<s<<endl;
//	int n,m=0,num;
//	cin>>n;
//	n=num;
//	while(n>0){
//		m=m*10+n%10;
//		n=n/10;
//	}
//	if(m==num){
//		cout<<"回文数"<<endl;
//	}else{
//		cout<<"不是回文数"<<endl;
//	}
//	int num,temp=0,n1=1,n2=1;
//	cout<<n1<<endl;
//	cout<<n2<<endl;
//	for(int i=0;i<=10;i++){
//		temp=n1+n2;
//		cout<<temp<<endl;
//		n1=n2;
//		n2=temp;		
//	}
	int n1,n2,he=0,he1=0,fu,temp,fen;
	char fuhao;
	srand(time(0));
	for(int i=1;i<=10;i++){
		n1=rand()%9+1;//第一个数
		n2=rand()%9+1;//第二个数
		fu=rand()%2;//符号，0：+，1：-
		if(fu==1&&n1<n2){
			temp=n2;
			n2=n1;
			n1=temp;
		}
		switch (fu) {
		case 0:
			fuhao='+';
			he1=n1+n2;
			break;
		case 1:
			fuhao='-';
			he1=n1-n2;
			break;
		}
		cout<<n1<<fuhao<<n2<<"=";
		cin>>he;
		if(he==he1){
			cout<<"正确"<<endl;
			fen=fen+10;
		}else{
			cout<<"错误"<<endl;
		}
	}
	cout<<"总分是>>>"<<fen<<endl;
	return 0;
}
