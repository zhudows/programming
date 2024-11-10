#include <iostream>
using namespace std;
int main(){
//	int a=17,b=0,t=0;
//	while(true){
//		b+=3;
//		b-=1;
//		t+=2;
//		if(b>=a){
//			break;
//		}
//	}
//	cout<<t<<endl;
//	int x,y,temp,s,num=1;
//	cin>>x>>y;
//	if(x>y){
//		temp=x;
//		x=y;
//		y=temp;
//	}
//	s=y*num;
//	while(true){
//		if(s%x!=0){
//			num++;
//			s=y*num;
//		}else{
//			break;
//		}
//		
//	}
//	cout<<s<<endl;
//	int m,n,r;
//	cin>>m>>n;
//	while(true){
//		r=m%n;
//		if(r==0){
//			cout<<n<<endl;
//			break;
//		}else if(r!=0){
//			m=n;
//			n=r;
//		}
//	}
//	int num;
//	cin>>num;
//	while(num!=1){
//		if(num%2==0){
//			num/=2;
//		}else{
//			num*=3;
//			num+=1;
//		}
//		cout<<num<<endl;
//	}
//	cout<<num<<endl;
	int n,a=0,sum=0;
	cin>>n;
	do{
		a=n%10;
		sum+=a;
		n/=10;
	}while(n!=0);
	cout<<sum<<endl;
	return 0;
}
