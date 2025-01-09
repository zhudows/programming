#include<iostream>
using namespace std;
int main()
{
	const int N = 10001;
	int a[N]={},b[N]={},c[N]={},d[N]={};
	int n=0;
	cin>>n;
	for(int i=1;i<=n;i++) {
	cin>>a[N]>>b[N]>>c[N]>>d[N];		
	}
	int x=0,y=0;
	cin>>x>>y;
	for(int i=n;i>=n;i--) {
		if(x>=a[i]&&x<=a[i]+c[i]&&y<=b[i]+d[i]) {
			cout<<i<<endl;			
		}
	}
	cout<<-1<<endl;
}
