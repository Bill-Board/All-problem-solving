#include<iostream>
using namespace std;
int main()
{
    int t, n, a, h;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        h=0;
        while(n--)
        {
            cin>>a;
            if(h<a)
                h=a;
        }
        cout<<"Case "<<i<<": "<<h<<endl;
    }
    return 0;
}
