#include <iostream>
using namespace std;
int main() {
    int n=0;
    int s=0;
    int k;
    cin>>k;
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= i; j++) {
            n++;
            s+=i;
            if (n==k) {
                cout<<s;
                break;
            }
        }
    }
    return 0;
}