#include <iostream>
using namespace std;
int main() {
//	int lucheng,time;
//	float feiyong=0;
//	cout<<"请输入路程>>>"; 
//	cin>>lucheng;
//	if(lucheng>10)
//		{feiyong=6+(10-2)*1.8+(lucheng-10)*1.8*1.5;}
//	else
//		{if(lucheng>2)
//			{feiyong=6+(lucheng-2)*1.8;}
//	else
//		{feiyong=6;}}
//	cout<<"请输入时间>>>";
//	cin>>time;
//	feiyong+=(time/3)*1;
//	cout<<"费用是："<<feiyong<<endl;
float height,weight,bmi;
cout<<"身高（米）：";
cin>>height;
cout<<"体重（公斤）：";
cin>>weight;
bmi=weight/(height*height);
if(bmi<18.5)
	cout<<"偏瘦";
else if(bmi<24) 
	cout<<"正常";
else if(bmi<28)
	cout<<"偏胖";
else if(bmi<40)
	cout<<"肥胖";
else
	cout<<"极重度肥胖（非人类）" ; 
return 0;	
}
