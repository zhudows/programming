#include <bits/stdc++.h>
using namespace std;
int n;
struct stu{
	string name;
	int gener;
	int age;
	int chinese;
	int math;
	char PE;
};
int main(){
	int a;
	stu zhangsan;
	cin >> zhangsan.name >> zhangsan.chinese >> zhangsan.PE ;
	cout <<zhangsan.chinese << " " << zhangsan.PE;
}
