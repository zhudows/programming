#include <iostream>
using namespace std;
int main(){
	int h,m,s,xiu,num,shi,fen,miao;
	cin>>h>>m>>s>>xiu;
	num=h*3600+m*60+s;
	num+=xiu;
	
	shi=num/3600;
	
	fen=num%3600/60;
	
	miao=(num%3600)%60;
	
	cout<<shi<<" "<<fen<<" "<<num<<endl;
	return 0;
}
