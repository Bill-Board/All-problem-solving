#include<iostream>
using namespace std;
int main()
{
    int a, b;cin>>a>>b;
    for(int i=1;;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            cout<<i<<endl;return 0;
        }
    }
}
