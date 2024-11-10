#include <iostream>
using namespace std;
int main() {
	int ge,num,he,ge1,num1;
	cin>>num>>num1;
	for(int i=1;i<=num;i++){
		cin>>ge;
		ge1=ge%10;
		if(ge1==num1){
			he+=ge;
		}else if(ge==num1){
			he+=ge;
		}
	}
	cout<<he<<endl;
	return 0;
}
