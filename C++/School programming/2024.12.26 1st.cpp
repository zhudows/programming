#include <iostream>
using namespace std;
int main () {
	int k,n,ans=0,s=0;
	cin>>n;
	k=1;//金币
	for (int i = 0; i <= n; i++) {
		ans+=k;
		s++;
		if (k=s) {
			k++;
			s=0;
		}
	}
	cout<<ans;
	return 0;
}
