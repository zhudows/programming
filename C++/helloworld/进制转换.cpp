#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;
int main() {
int number=0,numberin=0,geshu=0,jiashu=0,jiashu1=0,he=0,n=0,n1=0,n2=0,m=0,yan1=0;
    string tf,jiajianshu,jinzhi,s,m1,er,yansuan,yan;
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
    //<20>��ʾ������ȡ20λ���
    //�Ӽ�������
    cout<<"�Ƿ���мӼ�������[y/n]>>>";
    cin>>tf;
    n=0;
    //if�ж��Ƿ���мӼ���
    if (tf=="y") {   
        cout<<"�������������������[��/��]>>>";//����ӷ����Ǽ���
        cin>>jiajianshu;
        //�������ӣ���ִ�мӷ��������
        if (jiajianshu=="��") { 
        cout<<"����������ĸ���>>>";//��������ĸ���
        cin>>geshu;
        cout<<"���������ݵ�����[2/10]>>>";//�ӷ����ݵ�����
        cin>>jinzhi;
        //�������2���ƣ���ִ������ĳ���
        if (jinzhi=="2") {
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
        cout<<"���(������):"<<std::bitset<20>(n1)<<endl;//������
        } else if (jinzhi=="10") {
            for (int j=0;j<geshu;j++) {
                cout<<"���������(ʮ����)>>>";
                cin>>n;
                n2=n;
                n1+=n2;
                n=0;
            }
            cout<<"���(������):"<<std::bitset<20>(n1)<<endl;
        }
        }
        if (jiajianshu=="��") {
        cout<<"����������ĸ���>>>";
        cin>>geshu;
        geshu=geshu-1;
        cout<<"���������ݵ�����[2/10]>>>";
        cin>>jinzhi;
        if (jinzhi=="2") {
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
        } else if (jinzhi=="10") {
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
        cout<<"�Ƿ�����[y/n]>>>";
        cin>>yansuan;
        if (yansuan=="y") {
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
            cout<<"�����ѽ��������˳�����";
        }        
    } else {
        cout<<"�����ѽ��������˳�����";
    }
    return 0;
}