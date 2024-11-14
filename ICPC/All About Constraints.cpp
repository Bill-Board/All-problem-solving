//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef pair <int, int> pii;
const int N=200005;
int tc = 1;
void solve()
{
    int n, q; cin >> n >> q;
    vector<pii> v(q);
    for(auto &i: v)
        cin >> i.first >> i.second;
    sort(v.begin(),v.end());
    vector<int> ans(n+5, -1);
    for(auto i: v){
        int l = i.first, r = i.second;
        if((r-l+1)>64){
            cout <<"Case "<<tc++ <<":\nImpossible\n";
            return;
        }
        int temp[70]={0};
        for(int j = l; j<=r; j++){
            if(ans[j]==-1)continue;
            temp[ans[j]]=1;
        }
        int pos = 0 ;
        for(int j = l; j<=r; j++){
            if(ans[j] != -1)continue;
            while(pos < 65 and temp[pos]==1)
                pos++;
            ans[j] = pos++;
        }
    }
    cout <<"Case "<< tc++ << ":\n";
    for(int i = 1; i<=n; i++){
        if(ans[i]==-1)ans[i]=0;
        ull p = 1ull<<ans[i];
        cout << p << " \n"[i==n];
    }
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...

