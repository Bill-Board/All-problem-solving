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

int position(int l, int r){
    int pivot = a[r], i = l - 1;
    for(int j = l; j<r; j++){
        if(a[j]<pivot)
            swap(a[++i], a[j]);
    }
    swap(a[++i], a[r]);
    return i;
}


void quicksort(int l, int r){
    if(l >= r) return;
    cout << l << " " << r << "\n";
    int p = position(l, r);
    quicksort(l, p-1);
    quicksort(p+1, r);
}

void solve(int tc)
{
    int n = 10;
    for(int i = 0; i<n; i++)
        cout << a[i] << " \n"[i==n-1];
    quicksort(0, n-1);
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
