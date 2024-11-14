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

v99 rrr[N];
v99 sze[N];
v99 root(v99 val)
{
    while(val!=rrr[val])
    {
        val=rrr[val];
    }
    return val;
}

void dsu(v99 x,v99 y)
{
    v99 xr=root(x),yr=root(y);
    if(xr==yr)return;
    //cout<<sze[xr]<<whp<<sze[yr]<<ses;
    if(sze[xr]>sze[yr])
    {
        rrr[yr]=rrr[xr];
        sze[xr]+=sze[yr];
    }
    else
    {
        rrr[xr]=rrr[yr];
        sze[yr]+=sze[xr];
    }
}
void init(v99 n)
{
    for(v99 i=0; i<=n; i++){rrr[i]=i;sze[i]=1;}
}

void solve()
{
    v99 n;
    cin >> n;
    vll p(n+1),pos(n+2);
    init(n+2);
    for(v99 i=1;i<=n;i++)
    {
        cin>>p[i];
        pos[p[i]]=i;
    }
    v99 last=0,m =0;
    for(v99 i=1;i<=n;i++)
    {
        v99 kot=pos[i];
        if(kot<last)continue;
        if(m>i)dsu(m,i);//,cout << m <<ses;
        for(v99 j = kot; last<j ;j--)
            dsu(i, p[j]), m= max(m, p[j]);//, cout << p[j] <<whp << i <<ses;
        //cout <<ses ses;
        last=kot;
    }
    set< v99 > s;
    for(v99 i=1; i<= n ;i++)s.insert(root(i));
    cout << s.size() <<ses;

}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...
