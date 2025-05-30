#include<iostream>
using namespace std;
int main()
{
    int n, h, a, sum=0;
    cin>>n>>h;
    while(n--)
    {
        cin>>a;
        if(a<=h)
            sum=sum+1;
        else
            sum=sum+2;
    }
    cout<<sum<<endl;
    return 0;
}
