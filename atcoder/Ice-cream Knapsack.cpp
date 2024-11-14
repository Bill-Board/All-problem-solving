//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=200005;

bool sort_c(pair< ll, ll > a, pair < ll, ll > b)
{
    if(a.first == b.first )
        return a.second > b.second;
    else
        return a.first < b.first;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector< pair < ll, ll > > a (n);
    for(auto &i : a)
        cin >> i.first;
    for(auto &i : a)
        cin >> i.second;
    sort( a.begin(), a.end(), sort_c);
    cout << a[k-1].first << " ";
    vector < int > p;
    for(auto i: a)
    {
        if( i.first > a[k-1].first )
            break;
        p.push_back( i.second );
    }
    sort( p.begin(), p.end() , greater<>() );
    ll sum=0;
    for(ll i=0; i<k; i++)
        sum += p[i];
    cout << sum << endl;
}



signed main()
{
    freopen("icecream.in","r",stdin);
    int test_case=1;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
