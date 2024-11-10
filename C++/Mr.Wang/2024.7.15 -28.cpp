#include <iostream>
#include <string>
using namespace std;
int main(){
//	int nums[6]={12,3,45,6,78,9};
//	int temp,i,j;
//	for(int i=1;i<size(nums);i++){
//		j=i;
//		while(j>0&&nums[j]<nums[j-1]){
//			temp=nums[j];
//			nums[j]=nums[j-1];
//			nums[j-1]=temp;
//			j--;
//		}
//	}
//	for(int i=0;i<size(nums);i++){
//		cout<<nums[i]<<" ";
//	}
//	int nums[6]={12,3,45,6,78,9};
//	int n=6,temp;
//	for(int i=0;i<=n-1;i++){
//		int max_position=0;
//		for(int j=0;j<n-i;j++){
//			if(nums[j]>nums[max_position]){
//				max_position=j;				
//			}
//			temp=nums[n-i-1];
//			nums[n-i-1]=nums[max_position];
//			nums[max_position]=temp;
//		}
//	}
//	for(int i=0;i<6;i++){
//		cout<<nums[i]<<" ";
//	}
//	char str[2000];
//	int i,num,num1;
//	num=num1=0;
//	gets(str);
//	for(int i=0;str[i]!='\0';i++){
//		num++;
//		if(str[i]=='.'){
//			num1++;
//		}
//	}
//	puts(str);
//	cout<<"字符个数:"<<num<<endl;
//	cout<<"'.'的个数:"<<num1<<endl;
//	char s;
//	string str1,str2;
//	getline(cin,str1);
//	int i;
//	str2="";
//	for(int i=0;i<str1.size();i++){
//		s=str1[i];
//		if((s>='a'&&s<='z')||(s>='A'&&s<='Z')){
//			s++;
//			if((s>'Z'&&s<'a')||s>'z'){
//				s-=26;
//			}
//		}
//		str2+=s;
//	}
//	cout<<str2;
	int num=0,day,sum=0;
	cin>>day;
	for(int i=1;i<=day;i++){
		for(int j=1;j<=i;j++){
			sum+=i;
			num++;
		}
		if(num==day){
			break;
		}
	}
	cout<<sum<<endl;
	return 0;
}
