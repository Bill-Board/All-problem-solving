#include<bits/stdc++.h>
using namespace std;
using ll = long long;


ll a [100003];
int main()
{
    int n, x; cin >> n >> x;

    for(int i = 1; i<=n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    if(a[n]<x){
        cout << -1 << '\n';
        return 0;
    }

    int l = 1, r = n, ans = n;
    while(l<=r){
        int mid = (l + r)/2;
        bool ok = false;
        for(int i = 1, j = mid; j<=n; i++, j++){
            if(x <= a[j]-a[i-1]) ok = true;
        }
        if(ok) r = mid - 1, ans = mid;
        else l = mid + 1;
    }
    cout << ans << '\n';
    return 0;
}



///  Alhamdulillah...
