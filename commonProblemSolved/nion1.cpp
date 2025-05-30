//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000002;
int lp[N+3];
vector<int> pr;
int kot = 0;
void mpf()
{
    for(int i=2;i<=N;i++)
    {
        if(lp[i]==0)lp[i]=i,pr.push_back(i);
        for(int j=0;j<pr.size() and pr[j]<=lp[i] and i*pr[j]<=N;j++)
            lp[i*pr[j]]=pr[j];//, kot++;
    }


}
void solve()
{
    int n;
    cin >> n;
    int temp = n;
    int gpf = 0;
    int w = 0;
    int total_p = 0;
    ll nod = 1, sod = 1;
    while(temp > 1){
        int p = lp[temp], cnt = 0;
        ll gun = p;
        while(temp % p == 0){
            cnt ++;
            temp /= p;
            gun *= p;
        }
        if(cnt){
            gpf = max(gpf, p);
            w++;
            total_p += cnt;
            nod *= (cnt + 1);
            sod *= (gun - 1)/(p - 1);
        }
    }
    cout << lp[n] << " " << gpf << " " << w << " " << total_p << " " << nod << " " << sod << endl;
}



signed main()
{
    mpf();
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
