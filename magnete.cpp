#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, j=1, n;
    char a[20], b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(i!=0 && a[0]==b)
           j++;
        b=a[1];
    }
    cout<<j<<endl;
    return 0;
}
