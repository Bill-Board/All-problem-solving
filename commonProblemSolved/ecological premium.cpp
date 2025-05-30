#include<iostream>
using namespace std;
int main()
{
    int t, n, sum, a, b, c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        while(n--)
        {
            cin>>a>>b>>c;
            sum=sum+a*c;
        }
        cout<<sum<<endl;
    }
    return 0;
}
