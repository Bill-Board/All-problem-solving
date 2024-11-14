//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU

#include<bits/stdc++.h>
using namespace std;

typedef long long v99;
#define vll    vector<v99>
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long tokp;cin >> tokp;while(tokp--)
#define ses   "\n"
#define whp   " "
#define sob(z)  (z).begin(), (z).end()
#define ff first
#define ss second
#define pii pair<v99, v99>
const v99 N=200005;


/// code is here->----------------------------

bitset<N>bit;
vll a;
bool alabu(v99 sum,v99 ind,v99 n)
{
    bit.reset();
    bit[0]=1;
    for(v99 i=0;i<n;i++)
    {
        if(i==ind)continue;
        bit|=(bit<<a[i]);
    }
    //print(sum);
    return bit[sum]==0;
}
void solve()
{
    /// code is here->
    v99 n,sum=0;cin >> n;
    a.resize(n);
    for(v99 i=0;i<n;i++)cin >> a[i],sum+=a[i];
    if(sum&1 or alabu(sum/2,n+2,n)){cout << 0 <<ses ;return ;}
    for(v99 i=0;i<n;i++)
    {
        v99 kot=sum-a[i];
        if(kot&1){cout<<"1\n"<<i+1<<ses;return;}
        if(kot%2==0 and alabu(kot/2,i,n)){cout<<"1\n"<<i+1<<ses;return;}
    }
    cout << 0 <<ses ;
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    //i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...
