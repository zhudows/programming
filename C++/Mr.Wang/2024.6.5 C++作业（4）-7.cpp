#include <iostream>
using namespace std;
int main(){
	int n,l,r,num,g=0;
	cin>>n>>l>>r;
	for(int i=1;i<=n;i++){
		cin>>num;
		if(num>=l&&num<=r){
			g++;
		}
	}
	cout<<g<<endl;
	return 0;
}
