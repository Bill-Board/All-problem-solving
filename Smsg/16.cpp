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
void _merge_sort(int a[], int l, int m, int r){
    int *ek = new int[m - l + 1];
    int *dui = new int[r - m];
    for(int i = 0; i<m-l+1; i++)
        ek[i] = a[i + l];
    for(int i = 0; i<r-m; i++)
        dui[i] = a[i + m + 1];
    int i = 0, j = 0, ind = l;
    while(i < m - l + 1 or j < r - m){
        if(i < m - l + 1 and j < r - m){
            if(ek[i] <= dui[j])
                a[ind++] = ek[i++];
            else
                a[ind++] = dui[j++];
        }
        else if(i < m- l + 1)
            a[ind++] = ek[i++];
        else if(j < r - m)
            a[ind++] = dui[j++];
    }
}

void _merge(int a[], int l, int r){
    if(l >= r)return;
    int m = l + (r - l)/2;
    _merge(a, l, m);
    _merge(a, m+1, r);
    _merge_sort(a, l, m, r);
}

void solve(int tc)
{
    int n, k; cin >> n >> k;
    int *a = new int[n];
    for(int i = 0; i<n; i++)
        cin >> a[i];
    for(int i = 0; i<n; i++)
        cout << a[i] << " \n"[i==n-1];
    //_merge(a, 0, n-1);
    sort(a, a + n);
    for(int i = 0; i<n; i++)
        cout << a[i] << " \n"[i==n-1];
    int sum = 0, last = 0;
    for(int i = 0; i<k; i++)
        sum += a[i];
    sum += a[k-1]*(n-k);
    cout << sum << '\n';
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
