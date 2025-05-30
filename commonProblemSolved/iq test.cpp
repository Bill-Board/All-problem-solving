#include<iostream>
using namespace std;
int main()
{
    int n, e=0,l=99999, b[1000], a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(l>a[i])
            l=a[i];
    }
    for(int i=0;i<n-1;i++)
    {e=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                e++;
            if(e==(n-1))
            break;
        }
        if(e==(n-1))
            break;
    }
    /**
    if(l!=1){
    for(int i=0;i<n;i++)
    {
        b[i]=a[i]%l;
    }
    cout<<l<<endl;
    }
    else
    {
       */
    if(e==(n-1))
    {
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;}
    return 0;
}
