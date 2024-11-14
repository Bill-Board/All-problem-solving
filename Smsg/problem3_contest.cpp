//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 105005;
ll mod= 1e9+7;

int lp[N+10];
vector<int> pr;
void mpf()
{
    for(int i=2;i<=N;i++)
    {
        if(lp[i]==0)lp[i]=i,pr.push_back(i);;
        for(int j=0;j<pr.size() and pr[j]<=lp[i] and i*pr[j]<=N;j++)
            lp[i*pr[j]]=pr[j];
    }
}

int rrr[N];
int sze[N];
int root( int n ){
    while(rrr[n]!=n) {
        rrr[n] = rrr[rrr[n]];
        n = rrr[n];
    }
    return n;
}

void dsu(int x,int y)
{

    int xr=root(x),yr=root(y);
    if(xr == yr) return;
    if(sze[xr]>sze[yr]){
        rrr[yr]=rrr[xr];
        sze[xr]+=sze[yr];
    }
    else{
        rrr[xr]=rrr[yr];
        sze[yr]+=sze[xr];
    }
}
void solve(int tc)
{
    int n; cin >> n;
    vector<int> a(n);
    mpf();
    for(auto &i: a)
        cin >> i;
    for(int i = 1; i<N; i++)
        rrr[i] = i, sze[i] = 1;
    set<int> s, p;
    for(int i = 0; i<n; i++){
        int val = a[i], last = 0;
        while(val != 1){
            int kot = lp[val];
            s.insert(kot);
            if(last)
                dsu(last, kot);
            last = kot;
            while(val % kot == 0)
                val/=kot;
        }

    }
    for(auto i: s)
        p.insert(root(i));
    cout << p.size() << '\n';

}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
