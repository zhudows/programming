#include <iostream>
using namespace std;
int main() {
	int n=0,k=1,ans=1,s=0;
	cin>>n;
	n=n-2;
	s=k+ans;
	k=s;
	for (int i=1;i<=n;i++) {
		s=k+ans;
		ans=k;
		k=s;
	}
	cout<<s;
	return 0;
}
