#include <iostream>
using namespace std;
int main(){
	int num,temp=0;
	bool flag=false;
	cin>>num;
	for(int i=1;i<=num;i++){
		temp=i*i*i;
		if(temp==num){
			cout<<"Yes"<<endl;
			flag=true;
			break;
		}
	}
	if(!flag){
		cout<<"No"<<endl;
	}
	return 0;
}
