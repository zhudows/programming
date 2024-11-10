#include <iostream>
using namespace std;
int main() {
    while (true) {
    double x=0,y=0,z=0;
    cout<<"请输入仪器上的数值>>>";
    cin>>x;
    //y
    y=0.0065*x*50;
    y=y-0.003;
    y=y+0.010;
    //x
    z=y-0.010+0.003;
    z=z/0.0065;
    z=z/50;
    if (z=x) {
        cout<<"浓度:"<<x<<endl;
        cout<<"吸光度："<<y<<endl;
        cout<<"反推"<<z<<endl;
    } 
    }
}