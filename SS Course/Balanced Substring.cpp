//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    ll n,cnt =0;
    cin >> n;
    string s;
    cin >> s;
    map <int, pair<int , int > > mpp;
    mpp[0]={-1,-1};
    for(int i=0; i<n ; i++){
        cnt+= s[i]=='1';
        cnt-= s[i]=='0';
        if(mpp.count(cnt)==0)
            mpp[cnt]={i, i};
        else
            mpp[cnt].second=i;
    }
    int cr_h =0;
    for(auto i:mpp)
        cr_h = max( cr_h, i.second.second-i.second.first);
    cout << cr_h << endl;
}



signed main()
{

    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
