//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU

#include<bits/stdc++.h>
using namespace std;

typedef long long v99;
#define vll    vector<v99>
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
    string s;
    cin >> s;
    vll cnt(26,0);
    for(auto i: s)cnt[i-'a']++;
    for(v99 i=0; i<25 ; i++)
    {
        v99 val=cnt[i] / 2;
        if(cnt[i]&1)cnt[i]=1;
        else cnt[i]=0;
        cnt[i+1]+=val;
    }
    for(v99 i=25; ~i ; i--)
    {
        while(cnt[i]>0)
            cout << char(i+'a'), cnt[i]--;
    }
    cout <<ses;

}



signed main()
{

    v99 test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
