#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int n=1;
    for (int i=1;i<=b;i++) {
        n=n*a%7;
    }
    cout<<n<<endl;
    return 0;
}