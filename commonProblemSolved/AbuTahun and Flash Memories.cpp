#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main()
{
    int n, x, a; cin >> n >> x >> a;
    if(a < x){
        cout << 0 << '\n';
        return 0;
    }
    int kot = a/x;
    int ans = (n+kot-1)/kot;
    cout << ans << '\n';
    return 0;
}



///  Alhamdulillah...
