#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[10];
    int T, n, sum=0;
    cin>>T;
    while(T--)
    {
        cin>>a;
        if(a[0]=='d')
        {
            cin>>n;
            sum=sum+n;
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}
