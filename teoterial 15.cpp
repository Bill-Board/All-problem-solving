#include<iostream>
using namespace std;
class rectangle
{
    int hight;
    int wight;
public:
    int area();
    void set(int a, int b);
};
inline int rectangle ::  area(){
    return hight*wight;
}
void rectangle:: set(int a, int b)
{
    hight=a;
    wight=b;
}

int main()
{
    rectangle obj;
    obj.set(4,3);
    cout<<obj.area()<<endl;
    return 0;
}
