#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[999];
    int n, p;
    cin>>n;
    //cin.getline()
    cin>>a;strlwr(a);
    for(int i=97;i<=122;i++)
    {
        p=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==i)
               p=1;
        }
        if(p!=1)
        {
            cout<<"NO"<<endl;return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
