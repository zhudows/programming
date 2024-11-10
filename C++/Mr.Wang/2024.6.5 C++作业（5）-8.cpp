#include <iostream>
using namespace std;
int main(){
	int n,m,sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		sum=0;
		for(int j=1;j<=i&&j<=m;j++){
			if(i%j==0){
				sum++;
			}
		}
		if(sum%2==0){
			cout<<i<<endl;
		}
	}
	return 0;
}
/* 
	1 2 3 4 5 6 7 8 9 10
¢ñ	1 1 1 1 1 1 1 1 1 1
	0 0 0 0 0 0 0 0 0 0
	0 1 0 1 0 1 0 1 0 1
	0 1 1 1 0 0 0 1 1 1

*/
