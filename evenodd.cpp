#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int p, r, n, k;
    cin>>n>>k;
    if(n%2==0)
        p=n/2;
    else
        p=n/2+1;
    if(k>p)
    {
        p=k-p;
        r=p*2;
    }
    else
        r=k*2 -1;
    cout<<r<<endl;
    return 0;
}
