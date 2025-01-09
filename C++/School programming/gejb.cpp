#include<iostream>
using namespace std;
int main() {
int k,n=0, ans=0, s=0;
cin>>n;
k=1;
    for( int i=1;i<=n;i++) {
        ans+=k;
        s++;
        if(k=s) {
        k++;
        s=0;
        }
    cout<<ans;
    }
}
