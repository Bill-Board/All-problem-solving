#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100];
    int i, k, u=0, l=0;
    cin>>a;
    k=strlen(a);
    for(i=0;i<k;i++)
    {
        if(a[i]>=65 && a[i]<=90)
            u++;
        else
            l++;
    }
    if(u>l)
            strupr(a);
    else
            strlwr(a);
    cout<<a<<endl;
    return 0;
}
