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
    v99 n;
    cin>>n;
    vll j , b;
    for(v99 i=0; i< 2*n ; i++)
    {
        v99 x; cin >> x;
        if(x&1)b.push_back(i+1);
        else j.push_back(i+1);
    }
    v99 del=2;
    if(b.size()&1)b.pop_back(),del--;
    else if(b.size()>1)b.pop_back(),b.pop_back(),del-=2;

    if(del==1)j.pop_back();
    if(del==2)j.pop_back(),j.pop_back();
    for(v99 i=0; i < j.size(); i+=2)
        cout<< j[i] <<whp << j[i+1] <<ses;
    for(v99 i=0; i < b.size(); i+=2)
        cout<< b[i] <<whp << b[i+1] <<ses;

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
