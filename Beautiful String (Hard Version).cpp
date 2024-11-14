 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME


// Shoeb Akibul Islam
// Dept of ICE, NSTU


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 1000003
#define mp make_pair
#define pii pair<long long, long long>
#define pf printf
#define sf scanf
#define ff first
#define sob(z)  (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
using namespace __gnu_pbds;

v99 n,bit[mxi][26];


void changeFreq(v99 x, v99 ind, v99 value)
{
    while(x<=n)
    {
        bit[x][ind] += value;
        x += x & -x;
    }return;
}

v99 query(v99 x,v99 ind)
{
    v99 sum = 0;
    while(x > 0)
    {
        sum += bit[x][ind];
        x -= x & -x;
    }
    return sum;
}
void update(v99 i,v99 ind,v99 ind2,v99 value)
{
    changeFreq(i,ind,value);
    changeFreq(i,ind2,-value);
    return;
}

v99 tor_sotin(v99 i)
{
    return 25LL-i;
}


void solve()
{
    /// code is here->
    string s;cin>>n>>s;s='1'+s;
    rep0(i,1,n+1)changeFreq(i,s[i]-'a',1LL);
    v99 q;cin>>q;
    while(q--)
    {
        v99 c;cin>>c;
        if(c==2)
        {
            v99 x,y;cin>>x>>y;
            v99 fre[26];
            for(v99 i=0;i<26;i++)fre[i]=query(y,i)-query(x-1,i);
            v99 cr_h=0;
            for(v99 i=0;i<26;i++)cr_h+=(fre[i]*fre[tor_sotin(i)]);
            cout<<cr_h/2<<ses;
        }
        else
        {
            v99 x;char ch;cin>>x>>ch;
            update(x,ch-'a',s[x]-'a',1LL);
            s[x]=ch;
        }
    }
    return;

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
