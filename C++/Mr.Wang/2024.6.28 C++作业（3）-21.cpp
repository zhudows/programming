#include <iostream>
using namespace std;
int main(){
	int n,he,ge,shi;
	cin>>n;
	if(n>=10&&n<100){
		for(int i=10;i<=n;i++){
			ge=i%10;
			shi=i/10%10;
			he=i%(ge+shi);
			if(he==0){
				cout<<i<<endl;
			}
		}
	}
	return 0;
}
