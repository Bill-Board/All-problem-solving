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
    int n , k;
    cin >> n >> k;
    vector < int > a(n), pre (n) , suf(n), z;
    int sum =0;
    for(int i=0; i<n ; i++)
    {
        cin >> a[i];
        if(a[i]==0)
        {
            pre[i] = sum;
            sum = 0;
            z.push_back(i);
        }
        else sum++;
    }
    sum = 0;
    for(int i=n -1; ~i ; i--)
    {
        if(a[i]==0)
        {
            suf[i] = sum;
            sum = 0;
        }
        else sum++;
    }
    int cr_h = -1, pos=n;
    for(int i = 0, j = min(k, (int) z.size())-1; j < z.size(); i++, j++)
    {
        int kot = pre[ z[i] ] + z[j] - z[i] + 1 + suf[ z[j] ];
        if(cr_h < kot)
            cr_h = kot, pos = i;
        //cout << z[i] << " " << z[j] << endl;
    }
    for(int i = pos; i < z.size() and k>0; i++ , k--)
        a[ z[i] ] = 1;
    cr_h = 0, sum =0;
    for(int i=0; i<n ; i++)
    {
        if(a[i]==0)
            sum = 0;
        else sum++;
        cr_h = max( cr_h , sum );
    }
    cout << cr_h << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
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
