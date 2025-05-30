#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int c, n, a, d;
    char s;
    while(cin>>n)
    {
        a=0;d=0;
        while(n--)
        {
            cin>>s;
            if(s=='A')
               a++;
            else
               d++;
        }
        if(a==d)
            cout<<"Friendship"<<endl;
        else if(a>d)
            cout<<"Anton"<<endl;
        else
            cout<<"Danik"<<endl;
    }
    return 0;
}
