#include<iostream>
using namespace std;
class rectan
{
    int height;
    int weidth;
public:
    void set(int h, int w);
    int area();
    rectan(int h,int w);
    ~rectan();
};
int rectan::area()
{
    return height*weidth;
}
rectan:: rectan(int h,int w)
{
    height=h;
    weidth=w;
    cout<<"Consturctor "<<area()<<endl;
}
rectan::~rectan()
{
    cout<<"Distructor "<<area()<<endl;
}
int main()
{
    rectan obj(1,6), obj1(8,6);
    //cout<<"Area : "<<obj1.area()<<endl;
    return 0;
}




