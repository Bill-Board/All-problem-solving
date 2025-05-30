#include<iostream>
using namespace std;
int main()
{
    int a,sum;
    cin>>a;
    if(a==1)
        cout<<1<<endl;
    else
    {
        sum=(a*a)-(a-1);
        cout<<sum<<endl;
    }
    return 0;
}
