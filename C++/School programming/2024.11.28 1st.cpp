#include <bits/stdc++.h>
using namespace std;
int main() {
//	long long a[100];
//	int k;
//	cin>>k;
//	a[0]=1;
//	a[1]=1;
//	for (int i=2;i<=k;i++) {
//		a[i]=a[i-1]+a[i-2];
//		cout<<a[i-1]<<endl;
//	}
	int b=0;
	int a[30]; 
	cout<<"----------------------------------"<<endl;
	cout<<"|  ������Ʊ˫ɫ��    ���Բ���    |"<<endl;
	cout<<"|    ����1-33ѡ6    ����1-16ѡ1  |"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"������6�������һ������>>>";
	for (int i=0;i<=6;i++) {
		cin>>a[i];
	}
	srand(time(0));
	for (int i=1;i<=6;i++) {
		a[i]=rand()%33+1;
		cout<<a[i]<<" ";
	}
	cout<<"��˶Ժ���"<<endl;
	b=rand()%16+1;
	cout<<b<<" ";
	cout<<"��˶�����";
	
	return 0;
}
