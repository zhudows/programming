#include <iostream>
using namespace std;
int main() {
//	int lucheng,time;
//	float feiyong=0;
//	cout<<"������·��>>>"; 
//	cin>>lucheng;
//	if(lucheng>10)
//		{feiyong=6+(10-2)*1.8+(lucheng-10)*1.8*1.5;}
//	else
//		{if(lucheng>2)
//			{feiyong=6+(lucheng-2)*1.8;}
//	else
//		{feiyong=6;}}
//	cout<<"������ʱ��>>>";
//	cin>>time;
//	feiyong+=(time/3)*1;
//	cout<<"�����ǣ�"<<feiyong<<endl;
float height,weight,bmi;
cout<<"��ߣ��ף���";
cin>>height;
cout<<"���أ������";
cin>>weight;
bmi=weight/(height*height);
if(bmi<18.5)
	cout<<"ƫ��";
else if(bmi<24) 
	cout<<"����";
else if(bmi<28)
	cout<<"ƫ��";
else if(bmi<40)
	cout<<"����";
else
	cout<<"���ضȷ��֣������ࣩ" ; 
return 0;	
}
