#include <iostream>
using namespace std;
struct stu{
    string name;
    int gender;
    int age;
};
int main() {
    stu zhudows;
    cin>>zhudows.name>>zhudows.gender>>zhudows.age;
    cout<<zhudows.name<<zhudows.gender<<zhudows.age;
    return 0;
}