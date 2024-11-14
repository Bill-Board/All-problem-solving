#include<iostream>
using namespace std;
class Number{
int x,y;///privet member variable
public:
    Number() {x=0; y=0;}///constructor
    //Number(int a, int b) {x=a; y=b;}
    //void get(int &a, int &b) {a=x; b=y;}
    void set(int a, int b) {x=a; y=b;}
    void print() {cout<<x<<" "<<y<<endl;}

    Number operator + (Number ob);
    bool operator > (Number ob);
    bool operator < (Number ob);
    bool operator == (Number ob);
};

Number Number::operator + (Number ob)
{
    Number tmp;
    tmp.x=x+ob.x;
    tmp.y=y+ob.y;

    return tmp;
}
bool Number :: operator > (Number ob)
{
    return ((x+y)>(ob.x+ob.y));
}
bool Number::operator < (Number ob)
{
    return ((x+y)<(ob.x+ob.y));
}
bool Number::operator == (Number ob)
{
    return ((x+y)==(ob.x+ob.y));
}
int main()
{
    Number n1,n2,n3;
    n1.set(8,3);
    n2.set(2,5);
    n3=n1+n2;
    n3.print();
    if(n1>n2) cout<<"n1"<<endl;
    else if(n1==n2) cout<<"n1==n2"<<endl;
    else cout<<"n2"<<endl;
    return 0;
}
