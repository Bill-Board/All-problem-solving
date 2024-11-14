#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout<<":["<<x<<"XE]"<<endl;
#define debug2(x,y) cout<<":["<<x<<" "<<y<<"XE]"<<endl;
#define _ ios_base::sync_withstdio(false);
#define mod 1000000007
#pragma comment(linker, "/STACK:268435456");

ll freq[200005],a[200005],dp[200005];
ll cnt=0;
ll solve(ll i)
{
    if(i==1ll)return freq[i];
    if(i==0ll)return 0ll;
    if(dp[i]!=-1)return dp[i];
    cout<<i<<" "<<++cnt<<endl;
    ll a=solve(i-1),b=solve(i-2)*i*freq[i];
    return dp[i]=max(a,b);
}

int main()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    for(ll i=0;i<=100002;i++)dp[i]=-1ll;
    solve(100000ll);
}
///  2
///  1 2
