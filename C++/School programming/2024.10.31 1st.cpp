#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
//    for (int a=1;a<=100;a++) {
//    	cout<<a<<endl;
//	}
//	int i=1;
//	while (true) {
//		i+=1;
//		cout<<i<<endl; 
//		if (i==100) {
//			break;
//		}
//	}
//	int n=0;
//	cin>>n;
//	for (int i=0;i<n;i++) {
//		cout<<"************************************************"<<endl;
//	}
	int a,n;
	cout<<"�´�С(1-1000)>>>";
	srand(time(0));
	a=rand()%1000+1;
	cin>>n;
	while (n!=a) {
		if(n>a) {
			cout<<"����"<<endl; 
		}
		if (n<a) {
			cout<<"С��"<<endl; 
		}
		cin>>n;
	}
	cout<<"����"<<endl; 
    return 0;
}
