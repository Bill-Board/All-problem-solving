#include<iostream>
using namespace std;
int main()
{
    int n, l, h, w;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>l>>w>>h;
        if(l>20 || w>20 || h>20)
            cout<<"Case "<<i<<": bad\n";
        else
            cout<<"Case "<<i<<": good\n";
    }
    return 0;
}
