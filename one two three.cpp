#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[10];
    int T;
    cin>>T;
    while(T--)
    {
        cin>>a;
        if(strlen(a)==5)
            cout<<3<<endl;
        else if(strlen(a)==3)
        {
            if((a[0]=='o' && a[1]=='n') || (a[0]=='o' && a[2]=='e') || (a[1]=='n' && a[2]=='e'))
                cout<<1<<endl;
            else if((a[0]=='t' && a[1]=='w') || (a[0]=='t' && a[2]=='o') || (a[1]=='w' && a[2]=='o'))
                cout<<2<<endl;
        }
    }
    return 0;
}
