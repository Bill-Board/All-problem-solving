//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=60;
int n, cr_h = 0,ans[N], a[N], b[N], c[N], d[N], m, q;
void recu(int ind, int val)
{
    if(ind ==n+1)
    {
        int sum =0;
        for(int i = 0; i<q ; i++)
            if(ans[b[i]] - ans[a[i]] ==c[i])
                sum += d[i];
        cr_h = max(cr_h, sum);
        //cr_h++;
        return;
    }
    for(int i =val; i<=m; i++)
    {
        ans[ind] = i;
        recu(ind+1, i);
    }
}


void solve()
{
    cin >> n >> m >> q;
    for(int i =0 ; i < q ; i++)
        cin >> a[i] >> b[i] >> c[i] >>d[i];
    recu(1,1);
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
