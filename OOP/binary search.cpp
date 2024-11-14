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
int a[] = {5,7,23,45,56,67,78,124,132,165};

int bi_se(int l, int r, int val){
    if(l > r) return -1;
    int mid = (l + r) / 2;
    cout << l << " " << mid <<  " " << r << '\n';
    if(a[mid] == val) return mid;
    if(a[mid] < val)
        return bi_se(mid+1, r, val);
    else
        return bi_se(l, mid-1, val);
}

void solve(int tc)
{
    int n = 10;
    while(1){
        int b; cin >> b;
        int kot = bi_se(0, 9, b);
        cout << kot << '\n';
    }
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
