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
    v99 n , cr_h =0;
    cin >> n;
    vll  pos_b, neg_b;
    for(v99 i=0; i< n; i++)
    {
        v99 x; cin >> x;
        if(x<0 and x&1)/// neg
            neg_b.push_back(x);
        else if(x>0)/// pos
        {

            if(x&1)pos_b.push_back(x);
            else cr_h+=x;
        }
    }
    sort(sob(pos_b));sort(sob(neg_b));
    v99 sum= accumulate(sob(pos_b),0LL);
    if(sum%2==0)
    {
        if(neg_b.size() and pos_b.size())
            sum-=min(abs(neg_b.back()), pos_b.front());
        else if(neg_b.size())
            sum-=abs(neg_b.back());
        else sum-=pos_b.front();
    }
    cout << sum +cr_h <<ses;
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
