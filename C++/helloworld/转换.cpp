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
    if (MessageBoxW(NULL, L"�Ƿ�ִ�н���ת������?", L"����ת��",MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON1|MB_SYSTEMMODAL)==IDYES) {
        int numberin=0,geshu=0,jiashu=0,jiashu1=0,he=0,n=0,n1=0,n2=0,m=0,yan1=0,q=0;
        string s,m1,er,yansuan,yan;
        cout<<"������һ����������>>>";
        cin>>er;
        int len=er.length();
            for(int i=0;i<len;++i) {
                if(er[i]=='1') {
                n+=pow(2,len-1-i);
                }
            }
        cout<<"������10����:"<<n<<endl;
        cout<<"������һ��ʮ������>>>";
        cin>>numberin;
        cout <<"������8����:" << std::oct << numberin << endl;  
        cout <<"������10����:" << std::dec << numberin << endl;  
        cout <<"������16����:" << std::hex << numberin << endl;
        cout <<"������2����: " <<std::bitset<20>(numberin) << endl;
        n=0;
        if (MessageBoxW(NULL,L"�Ƿ���мӼ�������",L"����ת��",MB_YESNOCANCEL|MB_ICONQUESTION)==IDYES) {
            q=MessageBoxW(NULL,L"��ѡ���������������\n  ���ǡ���  ���񡱼�",L"����ת��",MB_YESNOCANCEL|MB_ICONQUESTION|MB_SYSTEMMODAL);
            if (q==IDYES) {
                cout<<"����������ĸ���>>>";
                cin>>geshu;
                q=MessageBoxW(NULL,L"��ѡ���������������\n  ���ǡ�2  ����10",L"����ת��",MB_YESNOCANCEL|MB_ICONQUESTION|MB_SYSTEMMODAL);
                if (q==IDYES) {
                for (int j=0;j<geshu;j++) {
                    cout<<"���������(������)>>>";
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
                cout<<"���(������):"<<std::bitset<20>(n1)<<endl;
            } else if (q==IDNO) {
                for (int j=0;j<geshu;j++) {
                    cout<<"���������(ʮ����)>>>";
                    cin>>n;
                    n2=n;
                    n1+=n2;
                    n=0;
                }
                cout<<"���(������):"<<std::bitset<20>(n1)<<endl;
            }
            } else if (q==IDNO) {
                cout<<"����������ĸ���>>>";
                cin>>geshu;
                geshu=geshu-1;
                q=MessageBoxW(NULL,L"��ѡ���������������\n  ���ǡ�2  ����10",L"����ת��",MB_YESNOCANCEL|MB_ICONQUESTION|MB_SYSTEMMODAL);
                if (q==IDYES) {
                    cout<<"���������(������)>>>";
                    cin>>m1;
                    int len=m1.length();
                        for(int i=0;i<len;++i) {
                            if(m1[i]=='1'){
                                m+=pow(2,len-1-i);
                            }
                        }
                    for (int j=0;j<geshu;j++) {
                        cout<<"���������(������)>>>";
                        cin>>s;
                        int len=s.length();
                        for(int i=0;i<len;++i) {
                            if(s[i]=='1'){
                                n+=pow(2,len-1-i);
                            }
                        }
                        m-=n;
                    }
                    cout<<"���(������):"<<std::bitset<20>(m)<<endl;
            } else if (q==IDNO) {
                n1=0;
                cout<<"�����뱻����(ʮ����)>>>";
                cin>>m;
                for (int j=0;j<geshu;j++) {
                    cout<<"���������(ʮ����)>>>";
                    cin>>n;
                    m-=n;
                }
                cout<<"���(������):"<<std::bitset<20>(m)<<endl;
                }
            }
            q=MessageBoxW(NULL,L"�Ƿ�����?",L"����ת��",MB_YESNO|MB_ICONQUESTION);
            if (q==IDYES) {
                cout<<"������һ��2������>>>";
                cin>>yan;
                int len1=yan.length();
                for(int i=0;i<len1;++i) {
                    if(yan[i]=='1'){
                        yan1+=pow(2,len1-1-i);
                    }
                }
                    cout<<"��������(ʮ����):"<<std::dec<<yan1<<endl;
                } else {
                    MessageBoxW(NULL,L"�����ѽ��������˳�����",L"����ת��",MB_OK|MB_ICONEXCLAMATION);
                }        
        } else {
            MessageBoxW(NULL,L"�����ѽ��������˳�����",L"����ת��",MB_OK|MB_ICONEXCLAMATION);
        }
        } else {
        MessageBoxW(NULL,L"�����ѽ��������˳�����",L"����ת��",MB_OK|MB_ICONEXCLAMATION);
        }
    return 0;
}