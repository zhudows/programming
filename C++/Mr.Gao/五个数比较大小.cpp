#include<iostream>
using namespace std;
int max(int x,int y)
{
	int ans;
	if(x>y) ans=x;
	else ans=y;
	return ans;
}
int main()
{
	int i,ans,a[5];
	for(i=0;i<5;i++)
		{cin>>a[i];}
	ans=a[0];
	ans=max(ans,a[1]);
	ans=max(ans,a[2]);
	ans=max(ans,a[3]);
	ans=max(ans,a[4]);
	cout<<ans<<endl;
	return 0;
}

