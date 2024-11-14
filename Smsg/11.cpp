//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;
int n,m,visi[14],d[14][14], x[14], y[14];
vector<int> a;
void alabu(int ind, int des, int val, int k){
    val += d[ind][des];
    if(m < val) return;
    if(des == n+1){ /// chole aschi basay
        if(k == n+1) m = min(m, val);
        return;
    }
    for(int i = 1;i<=n+1; i++){
        if(!visi[i]){
            visi[i] = 1;
            alabu(des, i, val, k+1);
            visi[i] = 0;
        }
    }
}

void solve(int tc)
{
    cin >> n;
    cin >> x[0] >> y[0] >> x[n+1] >> y[n+1];
    m = INT_MAX;
    for(int i = 1; i<=n; i++)
        cin >> x[i] >> y[i], visi[i]=0;
    for(int i = 0; i<n+2; i++)
        for(int j = 0; j<n+2; j++)
            d[i][j] = abs(x[i]-x[j])+abs(y[i] - y[j]);
    visi[0] = 1;
    visi[n+1]= 0;
    alabu(0, 0, 0, 0);
    cout << "#" << tc << ' ' << m << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
