//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 5005;
ll mod= 1e9+7;

int lp[N+3];
vector<int> pr;
void mpf()
{
    for(int i=2;i<=N;i++){
        if(lp[i]==0)lp[i]=i,pr.push_back(i);;
        for(int j=0;j<pr.size() and pr[j]<=lp[i] and i*pr[j]<=N;j++)
            lp[i*pr[j]]=pr[j];
    }
}

ll dp[N][N][2], m;

ll alabu(int step, int ok){
    if(step == 0) return 1;
    ll &ans = dp[step][m][ok];
    if(ans != -1) return ans;

    ans = 0;
    if(ok == 0){
        for(auto i: pr){
            if(i >= m or step - i < 0) break;
            ans += alabu(step - i, 1);
            ans %= mod;
        }
    }
    else
        for(int i = 1; i<=step; i++)
            ans += alabu(step - i, 0), ans %= mod;
    return ans;
}

void solve(int tc)
{
    int n;cin >> n >> m;
    int pos = upper_bound(pr.begin(), pr.end(), m-1) - pr.begin();
    m = pr[pos-1];
    cout << m << '\n';
    //cout << (alabu(n,1) + alabu(n, 0)) % mod << '\n';
}



signed main()
{
    memset(dp, -1,sizeof(dp));
    mpf();
    int test_case=1;
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
