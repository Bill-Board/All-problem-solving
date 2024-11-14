#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a, b, c;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
            return 0;
        if(a>b)
        {
            c=a;
            a=b;
            b=c;
        }
        c=min(b-a,(100-b)+a);
        cout<<c<<endl;
    }
}
