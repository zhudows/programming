#include <iostream>
using namespace std;
int main(){
	int a,sum=0,count=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=i;j++){
			//cout<<i;
			sum+=i;
			count++;
			//cout<<"µÚ"<<i<<"Ìì"<<i<<endl;
		}
		if(count==a){
			break;
		}
	}
	cout<<sum<<endl;
	return 0;
	/*
		1 3 6 10 15 21
		1
		1+2=3
		3+3=6
		6+4=10
		10+5=15
		15+6=21
		......
	*/
}
