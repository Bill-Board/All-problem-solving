#include<iostream>
using namespace std;
int main()
{
    int n, k=0, a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            k++;
    }
    if(k==(n-1))
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
}
