#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int n,g;
	srand(time(0));
	n=rand()%100+1; 
	do{
		cout<<"������1~100֮���������"<<endl;
		cin>>g;
		if(g>n)	{cout<<"����"<<endl;}
		if(g<n)	{cout<<"С��"<<endl;}
	}
	while(g!=n);
	cout<<"�����ˣ�"<<endl; 
	system("shutdown -p");
	return 0;
}
