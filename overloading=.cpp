#include<iostream>
using namespace std;
class space{
    int x;
public:
    void display();
    void operator = (int p);
};
void space :: display()
{
    cout<<"x ="<<x<<endl;
}
void space :: operator = (int p)
{
    x=p;
}
int main()
{
    space s;
    s=(10);
    s.display();
    return 0;
}








