#include<iostream>
using namespace std;
int main()
{
    unsigned long long n, i, j;
    signed long long sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            sum=sum+i;
        else
            sum=sum-i;
    }
    cout<<sum<<endl;
    return 0;
}
