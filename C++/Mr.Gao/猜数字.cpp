#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int n,g;
	srand(time(0));
	n=rand()%100+1; 
	do{
		cout<<"请输入1~100之间的任意数"<<endl;
		cin>>g;
		if(g>n)	{cout<<"大了"<<endl;}
		if(g<n)	{cout<<"小了"<<endl;}
	}
	while(g!=n);
	cout<<"猜中了！"<<endl; 
	system("shutdown -p");
	return 0;
}
