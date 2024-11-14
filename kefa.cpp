#include<iostream>
using namespace std;
int main()
{
    int  a[10000],b[1000];
    int i, j=0, k=1, m=1, n, h=-1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=a[i-1] && i>0)
            k++;
        else if(a[i]<a[i-1] && i>0)
        {
            if(h<k)
                h=k;
            k=1;
        }
        if(i==(n-1))
        {
            if(h<k)
                h=k;
        }
    }
    cout<<h<<endl;
    return 0;
}
