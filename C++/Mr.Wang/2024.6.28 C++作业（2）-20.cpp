#include <iostream>
using namespace std;
int main(){
	int num,m,temp;
	cin>>num;
	m=0;
	for(int i=1;i<=num;i++){
		temp=i*i*i;
		m+=temp;
	}
	cout<<m<<endl;
	return 0;
}
