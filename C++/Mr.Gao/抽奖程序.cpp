#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int n,a;
	cout<<"�齱��1~10��5������"<<endl;
	cout<<"������1~10>>>";
	cin>>n;
	srand(time(0));
	a=rand()%8+5;
	if(n==a){
		cout<<"�н�����֧��114514Ԫ��"<<endl;
	}
	else{
		cout<<"�н��͹��ˣ�֧��2Ԫ"<<endl;
		 
	} 
	cout<<"�н������ǣ�"<<a<<endl;
	return 0; 
}
