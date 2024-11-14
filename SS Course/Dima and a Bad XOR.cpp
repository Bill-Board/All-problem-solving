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
v99 n , m;
vector< vll > a;

void alabu(vll ek, vll dui, v99 ind)
{
    if(ek.size()%2==0)ek.push_back(dui.back());
    sort(sob(ek),greater<>());
    for(v99 i=0; i<n ; i++)
    {
        for(v99 j = 0; j < m ; j++)
        {
            if(a[i][j]& (1<<ind))
            {
                if(ek.back()==i)
                {
                   cout << j+1 << whp;
                    break;
                }
            }
            else
            {
                if(ek.back()!=i)
                {
                   cout << j+1 << whp;
                    break;
                }

            }
        }
        if(ek.back()==i)ek.pop_back();
    }
    cout << ses;

}


void solve()
{

    cin >> n >> m;
    a.resize(n, vll (m) );
    for(auto & i : a)
        for(auto &j: i)cin >> j;
    for(v99 i=0; i< 11; i++)
    {
        vll ek, dui, z;
        for(v99 j=0; j < n ; j++)
        {
            vll p,pp;
            for (v99 k = 0; k < m ; k++)
            {
                if(a[j][k]&(1<<i))
                    p.push_back(k);
                else
                    pp.push_back(k);
            }
            if(p.size() and pp.size())
                dui.push_back(j);
            else if(p.size())
                ek.push_back(j);
            else
                z.push_back(j);
        }
        if(ek.size()&1 or dui.size())
        {
//            for(auto j:ek)cout << j <<whp;cout <<ses;
//            for(auto j:dui)cout << j <<whp;cout <<ses;
            cout << "TAK" <<ses;
            alabu(ek, dui, i);
            return;
        }
    }
    cout << "NIE" <<ses;
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
