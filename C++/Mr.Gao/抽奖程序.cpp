#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int n,a;
	cout<<"抽奖（1~10，5个数）"<<endl;
	cout<<"请输入1~10>>>";
	cin>>n;
	srand(time(0));
	a=rand()%8+5;
	if(n==a){
		cout<<"中奖，请支付114514元！"<<endl;
	}
	else{
		cout<<"中奖就怪了，支付2元"<<endl;
		 
	} 
	cout<<"中奖号码是："<<a<<endl;
	return 0; 
}
