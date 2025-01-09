#include<iostream>
using namespace std;
int main() {
	const int N = 10001;
	int a[N]={},b[N]={},g[N]={},k[N]={};
	int n=0;
	cin >> n;
	for (int i=1;i<=n;i++) {
		cin>>a[i]>>b[i]>>g[i]>>k[i];
		
	}
	int x=0,y=0;
	cin>>x>>y;
	for (int i=n;i>=1;i--) {
		if (x>=a[i]&&x<=a[i]+g[i]&&y<=b[i]+k[i]) {
			cout<<i<<endl;
			break;
			return 0; 
		}
	}
	cout<<-1<<endl;
	return 0;
}
