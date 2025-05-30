#include<iostream>
using namespace std;
int main()
{
    int n, a, x;
    float sum=0, ans, m;
    cin>>n;x=m=n;cout.precision(14);
    while(x--)
    {
        cin>>a;
        sum=sum+a;
    }//cout<<sum<<endl;
    //sum=sum/100;
    ans=sum/m;
    //cout.setf(ios::showpoint);
    //cout.precision(14);
    cout<<ans<<endl;
    return 0;
}
