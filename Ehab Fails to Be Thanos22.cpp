#include<iostream>
using namespace std;
int main()
{
    int t, sum1=0, sum2=0, a[10000];
    cin>>t;
    for(int i=0;i<2*t;i++)
    {
        cin>>a[i];
        if(i%2==0)
            sum1=sum1+a[i];
        else
            sum2=sum2+a[i];
    }
    if(sum1!=sum2)
    {
        for(int i=0;i<2*t;i=i+2)
            cout<<a[i]<<" ";
        for(int i=1;i<2*t;i=i+2)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}
