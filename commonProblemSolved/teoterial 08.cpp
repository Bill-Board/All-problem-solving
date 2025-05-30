#include<iostream>
using namespace std;
class rect
{
    int hight;
    int wedth;
public:
    void set(int a, int b);
    int area();
};
inline int rect::area()
{

    return hight*wedth;
}
void rect::set(int a, int b)
{
    hight=a;
    wedth=b;
}
int main()
{
    int h, w;
    rect obj;
    cin>>h>>w;
    obj.set(h,w);
    cout<<"Area of Rect: "<<obj.area()<<endl;

    return 0;
}
