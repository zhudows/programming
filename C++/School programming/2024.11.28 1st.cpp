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
	cout<<"|  ¸£Àû²ÊÆ±Ë«É«Çò    ¾ø¶Ô²»¿Ô    |"<<endl;
	cout<<"|    ºìÇò1-33Ñ¡6    À¶Çò1-16Ñ¡1  |"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"ÇëÊäÈë6¸öºìÇòºÍÒ»¸öÀºÇò>>>";
	for (int i=0;i<=6;i++) {
		cin>>a[i];
	}
	srand(time(0));
	for (int i=1;i<=6;i++) {
		a[i]=rand()%33+1;
		cout<<a[i]<<" ";
	}
	cout<<"ÇëºË¶ÔºìÇò"<<endl;
	b=rand()%16+1;
	cout<<b<<" ";
	cout<<"ÇëºË¶ÔÀºÇò";
	
	return 0;
}
