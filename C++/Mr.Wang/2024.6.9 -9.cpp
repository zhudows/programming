#include <iostream>
using namespace std;
int main(){
//	int a,b,c,num;
//	cin>>a>>b>>c;
//	if(a>b){
//		num=a;
//		a=b;
//		b=num;
//	}
//	
//	if(a>c){
//		num=a;
//		a=c;
//		c=num;
//	}
//	
//	if(b>c){
//		num=b;
//		b=c;
//		c=num;
//	}
//	cout<<a<<" "<<b<<" "<<c;
//	int fen;
//	cin>>fen;
//	if(fen>=90){
//		cout<<"A"<<endl;
//	}else if(fen<=89&&fen>=70){
//		cout<<"B"<<endl;
//	}else if(fen<=69&&fen>=60){
//		cout<<"C"<<endl;
//	}else{
//		cout<<"D"<<endl;
//	}	
//	int score;
//	char n;
//	cin>>score;
//	switch (score/10) {
//	case 10:
//	case 9:
//		n='A';
//		break;
//	case 8:
//	case 7:
//		n='B';
//		break;
//	case 6:
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//		n='C';
//		break;
//	default:
//		n='D';
//		break;
//	}
//	cout<<n<<endl;
//	for(int i=1;i<=200;i++){
//		if(i%3!=2||i%7!=1){
//			continue;
//		}
//		cout<<i<<endl;
//	}
//	int num,i=2;
//	bool flag=true;
//	cin>>num;
//	while(true){
//		if(i<=num-1){
//			if(num%i==0){
//				flag=false;
//				break;
//			}
//			i++;
//		}
//		if(i==num){
//			break;
//		}
//	}
//	if(!flag){
//		cout<<"不是质数"<<endl;
//	}
//	else{
//		cout<<"是质数"<<endl;
//	}
	int n;
	bool flag;
	cin>>n;
	for(int i=2;i<n;i++){
		flag=true;
		if(n%i==0){
			flag=false;
			break;
		}
	}
	if(flag){
		cout<<"是质数"<<endl;
	}else{
		cout<<"不是质数"<<endl;
	}
	return 0;
}
