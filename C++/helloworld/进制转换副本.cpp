#include <bits/stdc++.h>
#include <iostream>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <Windows.h>
#include <WinUser.h>
#pragma comment(lib,"user32.lib")
using namespace std;
int main() {
    if (MessageBoxW(NULL, L"是否执行进制转换程序?", L"进制转换",MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON1|MB_SYSTEMMODAL)==IDYES) {
        int numberin=0,geshu=0,jiashu=0,jiashu1=0,he=0,n=0,n1=0,n2=0,m=0,yan1=0,q=0;
        string s,m1,er,yansuan,yan;
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
        n=0;
        if (MessageBoxW(NULL,L"是否进行加减法运算",L"进制转换",MB_YESNOCANCEL|MB_ICONQUESTION)==IDYES) {
            q=MessageBoxW(NULL,L"请选择运行运算的类型\n  “是”加  “否”减",L"进制转换",MB_YESNOCANCEL|MB_ICONQUESTION|MB_SYSTEMMODAL);
            if (q==IDYES) {
                cout<<"请输入加数的个数>>>";
                cin>>geshu;
                q=MessageBoxW(NULL,L"请选择运行运算的类型\n  “是”2  “否”10",L"进制转换",MB_YESNOCANCEL|MB_ICONQUESTION|MB_SYSTEMMODAL);
                if (q==IDYES) {
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
                cout<<"结果(二进制):"<<std::bitset<20>(n1)<<endl;
            } else if (q==IDNO) {
                for (int j=0;j<geshu;j++) {
                    cout<<"请输入加数(十进制)>>>";
                    cin>>n;
                    n2=n;
                    n1+=n2;
                    n=0;
                }
                cout<<"结果(二进制):"<<std::bitset<20>(n1)<<endl;
            }
            } else if (q==IDNO) {
                cout<<"请输入减数的个数>>>";
                cin>>geshu;
                geshu=geshu-1;
                q=MessageBoxW(NULL,L"请选择运行运算的类型\n  “是”2  “否”10",L"进制转换",MB_YESNOCANCEL|MB_ICONQUESTION|MB_SYSTEMMODAL);
                if (q==IDYES) {
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
            } else if (q==IDNO) {
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
            q=MessageBoxW(NULL,L"是否验算?",L"进制转换",MB_YESNO|MB_ICONQUESTION);
            if (q==IDYES) {
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
                    MessageBoxW(NULL,L"程序已结束，请退出程序",L"进制转换",MB_OK|MB_ICONEXCLAMATION);
                }        
        } else {
            MessageBoxW(NULL,L"程序已结束，请退出程序",L"进制转换",MB_OK|MB_ICONEXCLAMATION);
        }
        } else {
        MessageBoxW(NULL,L"程序已结束，请退出程序",L"进制转换",MB_OK|MB_ICONEXCLAMATION);
        }
    return 0;
}