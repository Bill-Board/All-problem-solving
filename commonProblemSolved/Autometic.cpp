#include<iostream>
using namespace std;
int main()
{
    int t, n, ans1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans1=((((n*63)+7492)*5)-498);
        ans1=ans1/10;
        ans1=ans1%10;
        if(ans1<0)
            ans1=-ans1;
        cout<<ans1<<endl;
    }
    return 0;
}
