#include<iostream>
using namespace std;
int main()
{
    unsigned long long int a, b, c, sum=0;
    cin>>a>>b>>c;
    if(a==(b+1) || b==(a+1) || a==b)
        sum=c*2+b+a;
    else
    {
        if(a>b)
            sum=c*2+b*2+1;
        else
            sum=c*2+a*2+1;
    }
        cout<<sum<<endl;
    return 0;
}
