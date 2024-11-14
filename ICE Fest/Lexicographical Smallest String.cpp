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
    int n, k;
    string s;
    vector<int> tom[150];
    cin >> n >> k >> s;
    map<char, int>  mpp;
    for(int i = 0; i<n; i++)
        tom[s[i]].push_back(i);
    s+='A';
    for(int i = n-1; ~i; i--)
        if(tom[s[i]].size()==k and s[i]!=s[i+1]){
            mpp[s[i]]=i+1;
            //cout << s[i] << " " << i << '\n';
        }
    vector<int> vis(n+2,0);

//    for(auto i: mpp)
//        cout << i.first << " " << i.second << '\n';

    for(auto i: mpp){
        //if(i.first=='a')continue;
        int pos = i.second;
        while( (vis[pos]==1  or i.first==s[pos]) and pos<n)
            pos++;
        //cout << "pos " << pos << '\n';
        if(i.first <= s[pos])
            continue;
        for(int j = 0; j < k -1; j++)
            vis[tom[i.first][j]] = 1;
    }
    string ans;
    for(int i = 0; i<n ; i++)if(vis[i] == 0)
        ans += s[i];
    cout << ans << '\n';
//    if(tom['a'].size() == k and string(ans.size(),'a')==ans)
//        cout << 'a' << '\n';
//    else
//        cout << ans << '\n';

}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
