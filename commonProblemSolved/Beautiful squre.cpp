#include<iostream>
using namespace std;
int main()
{
    int t, n, i, sum, a=19, d=12, arr[99999];
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;a=19;
        for(i=1;i<=(n-3);i++)
        {
            arr[i-1]=a;
            a=a+d;
        }
        arr[i-1]=a;
        for(i=0;i<(n-3);i++)
            sum=sum+arr[i];
        cout<<15+sum<<endl;
    }
    return 0;
}
