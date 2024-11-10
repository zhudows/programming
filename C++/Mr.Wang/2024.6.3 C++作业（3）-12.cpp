#include <iostream>
using namespace std;
int main(){
	int yu,shu;
	cin>>yu>>shu;
	if(yu<60&&shu>60){
		cout<<1<<endl;
	}else if(yu>60&&shu<60){
		cout<<1<<endl;
	}else{
		cout<<0<<endl;
	}
	return 0;
}
