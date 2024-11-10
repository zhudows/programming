#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;
int main() {
int number=0,numberin=0,geshu=0,jiashu=0,jiashu1=0,he=0,n=0,n1=0,n2=0,m=0,yan1=0;
    string tf,jiajianshu,jinzhi,s,m1,er,yansuan,yan;
    cout<<"请输入一个二进制数>>>";
    cin>>er;
    int len=er.length();
        for(int i=0;i<len;++i) {
            if(er[i]=='1') {
            n+=pow(2,len-1-i);
            }
        }
    cout<<"本数的10进制:"<<n<<endl;
    cout<<"请输入一个十进制数>>>";
    cin>>numberin;
    cout <<"本数的8进制:" << std::oct << numberin << endl;  
    cout <<"本数的10进制:" << std::dec << numberin << endl;  
    cout <<"本数的16进制:" << std::hex << numberin << endl;  
    cout <<"本数的2进制: " <<std::bitset<20>(numberin) << endl;
    //<20>表示二进制取20位输出
    //加减法运算
    cout<<"是否进行加减法运算[y/n]>>>";
    cin>>tf;
    n=0;
    //if判断是否进行加减法
    if (tf=="y") {   
        cout<<"请输入运行运算的类型[加/减]>>>";//输入加法还是减法
        cin>>jiajianshu;
        //如果输入加，则执行加法运算程序
        if (jiajianshu=="加") { 
        cout<<"请输入加数的个数>>>";//输入加数的个数
        cin>>geshu;
        cout<<"请输入数据的类型[2/10]>>>";//加法数据的类型
        cin>>jinzhi;
        //如果输入2进制，则执行下面的程序
        if (jinzhi=="2") {
        for (int j=0;j<geshu;j++) {
            cout<<"请输入加数(二进制)>>>";
            cin>>s;
            int len=s.length();
            for(int i=0;i<len;++i) {
                if(s[i]=='1') {
                    n+=pow(2,len-1-i);
                }
            }
            n2=n;
            n1+=n2;
            n=0;
        }
        cout<<"结果(二进制):"<<std::bitset<20>(n1)<<endl;//结果输出
        } else if (jinzhi=="10") {
            for (int j=0;j<geshu;j++) {
                cout<<"请输入加数(十进制)>>>";
                cin>>n;
                n2=n;
                n1+=n2;
                n=0;
            }
            cout<<"结果(二进制):"<<std::bitset<20>(n1)<<endl;
        }
        }
        if (jiajianshu=="减") {
        cout<<"请输入减数的个数>>>";
        cin>>geshu;
        geshu=geshu-1;
        cout<<"请输入数据的类型[2/10]>>>";
        cin>>jinzhi;
        if (jinzhi=="2") {
            cout<<"请输入减数(二进制)>>>";
            cin>>m1;
            int len=m1.length();
                for(int i=0;i<len;++i) {
                    if(m1[i]=='1'){
                        m+=pow(2,len-1-i);
                    }
                }
            for (int j=0;j<geshu;j++) {
                cout<<"请输入减数(二进制)>>>";
                cin>>s;
                int len=s.length();
                for(int i=0;i<len;++i) {
                    if(s[i]=='1'){
                        n+=pow(2,len-1-i);
                    }
                }
                m-=n;
            }
            cout<<"结果(二进制):"<<std::bitset<20>(m)<<endl;
        } else if (jinzhi=="10") {
            n1=0;
            cout<<"请输入被减数(十进制)>>>";
            cin>>m;
            for (int j=0;j<geshu;j++) {
            cout<<"请输入减数(十进制)>>>";
            cin>>n;
            m-=n;
            }
            cout<<"结果(二进制):"<<std::bitset<20>(m)<<endl;
        }
        }
        cout<<"是否验算[y/n]>>>";
        cin>>yansuan;
        if (yansuan=="y") {
            cout<<"请输入一个2进制数>>>";
            cin>>yan;
            int len1=yan.length();
            for(int i=0;i<len1;++i) {
                if(yan[i]=='1'){
                    yan1+=pow(2,len1-1-i);
                }
            }
            cout<<"验算结果是(十进制):"<<std::dec<<yan1<<endl;
        } else {
            cout<<"程序已结束，请退出程序";
        }        
    } else {
        cout<<"程序已结束，请退出程序";
    }
    return 0;
}