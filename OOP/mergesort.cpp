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
int n = 10,a[]={8,5,4,7,6,8,2,4,5,7};

void merge_(int l, int mid, int r){
    int p = mid - l + 1, q = r - mid;
    int L[p], R[q];
    for(int i = 0; i<p; i++)
        L[i] = a[i+l];
    for(int i = 0; i<q; i++)
        R[i] = a[i+mid+1];
    int i = 0, j = 0, k = l;
    while(i < p and j < q){
        if(L[i] <= R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }
    while(i<p)
        a[k++] = L[i++];
    while(j<q)
        a[k++] = R[j++];
}


void mergesort(int l, int r){
    if(l >= r) return;
    int mid = l + (r - l)/2;
    cout << l << " " << r << "\n";
    mergesort(l, mid);
    mergesort(mid+1, r);
    merge_(l, mid, r);
}

void solve(int tc)
{
    int n = 10;
    for(int i = 0; i<n; i++)
        cout << a[i] << " \n"[i==n-1];
    mergesort(0, n-1);
    for(int i = 0; i<n; i++)
        cout << a[i] << " \n"[i==n-1];
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
