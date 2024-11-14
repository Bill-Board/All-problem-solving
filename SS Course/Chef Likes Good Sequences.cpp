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

void solve()
{
    v99 n, q;
    cin >> n >> q;
    vll a(n), b;
    for(auto &i: a)
    {
        cin >>i;
        if(b.empty()) b.push_back(i);
        else if(b.back()!=i)b.push_back(i);
    }
    v99 cr_h=b.size();
    while(q--)
    {
        v99 x, y;
        cin >> x >> y;x--;
        if(n==1){cout << 1 << ses; continue;}
        if(x+1<n)
        {
            if(a[x]!=a[x+1] and a[x+1]==y)cr_h--;
            else if(a[x]==a[x+1] and a[x+1]!=y)cr_h++;
        }//cout << cr_h <<ses;
        if(x-1>=0)
        {
            if(a[x]!=a[x-1] and a[x-1]==y)cr_h--;
            else if(a[x]==a[x-1] and a[x-1]!=y)cr_h++;
        }
        a[x]=y;
        //for(auto i:a)cout << i << whp; cout << ses <<"cr_h ";;
        cout << cr_h <<ses;

    }
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
