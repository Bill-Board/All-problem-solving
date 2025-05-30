#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int >a;
    int b,x=4;
    while(x--)
    {
        cin>>b;
        a.insert(b);
    }
    cout<<4-a.size()<<endl;
    return 0;
}
