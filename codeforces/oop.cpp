#include<iostream>
using namespace std;
class human{
public:
    int age;
    human(){
        age=0;
    }

};
int main(){
    human* saimun = new human();
    saimun->age=24;
    human turab(*saimun);
    cout<<turab.age<<endl;
    turab.age=25;
    cout<<(*saimun).age<<endl;
}
