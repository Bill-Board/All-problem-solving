#include<iostream>
using namespace std;
int main()
{
    int n, h=0, l=9999, hp, lp, ans=0, a[999];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(h<a[i]){
            h=a[i];hp=i+1;
            }
        if(l>=a[i]){
            l=a[i];lp=i+1;
        }
    }
    ans=ans+hp-1;
    ans=ans+(n-lp);
    if(lp<hp)
        ans--;
    cout<<ans<<endl;
    return 0;
}
