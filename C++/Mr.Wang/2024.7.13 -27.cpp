#include <iostream>
using namespace std;
int main(){
//	int a1,a2,a3,a4,a5,n;
//	cin>>a1>>a2>>a3>>a4>>a5;
//	cout<<"请输入学生的编号（1~5）>>>";
//	cin>>n;
//	switch (n) {
//	case 1:
//		cout<<a1<<endl;
//		break;
//	case 2:
//		cout<<a2<<endl;
//		break;
//	case 3:
//		cout<<a3<<endl;
//		break;
//	case 4:
//		cout<<a4<<endl;
//		break;
//	case 5:
//		cout<<a5<<endl;
//		break;
//		default:
//			cout<<"查无此人"<<endl;
//			break;
//	}
//	int score[5];
//	int n;
//	for(int i=0;i<5;i++){
//		cin>>score[i];
//	}
//	cout<<"请输入学生的编号（1~5）>>>";
//	cin>>n;
//	if(n>=1&&n<=5){
//		cout<<score[n-1]<<endl;
//	}else{
//		cout<<"查无此人"<<endl;
//	}
//	int nums[5],xiao;
//	for(int i=0;i<5;i++){
//		cin>>nums[i];
//	}
//	xiao=nums[0];
//	for(int j=0;j<5;j++){
//		if(xiao>nums[j+1]){
//			xiao=nums[j+1];
//		}
//	}
//	cout<<xiao<<endl;
	int num[6]={6,5,4,1,3,2},temp=0;
	for(int i=0;i<6;i++){
		for(int j=0;j<6-i-1;j++){
			if(num[j]>num[j+1]){
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	for(int i=0;i<6;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
