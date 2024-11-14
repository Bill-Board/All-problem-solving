#include<iostream>
using namespace std;
int main()
{
    int n, i, k, l, r, a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>l>>r;
        a[i]=r;
    }
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(a[i]>=k)
        {
            r=i;
            break;
        }
    }
    i=n-r;
    cout<<i<<endl;
    return 0;
}
