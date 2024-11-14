#include<iostream>
using namespace std;
int main()
{
    char a[20];
    for(int i=1;;i++)
    {
        cin>>a;
        if(a[0]=='*')
            return 0;
        else if(a[0]=='H')
            cout<<"Case "<<i<<": Hajj-e-Akbar\n";
        else
            cout<<"Case "<<i<<": Hajj-e-Asghar\n";
    }
}
