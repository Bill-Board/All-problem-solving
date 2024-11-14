#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main()
{
    int t; cin >> t;
    while(t--){
        int l, r, x; cin >>x >> l >> r;
        bool ok = true;
        for(int i = l; i<=r and ok; i++){
            if(x % i == 0){
                for(int j = i+1; j<=r and ok; j++){
                    if((x/i)%j == 0){
                        int val = x/(i*j);
                        if(j < val and val <= r){
                            cout << i << ' ' << j << ' ' << val << '\n';
                            ok = false;
                        }
                    }
                }
            }
        }
        if(ok == true)
            cout << -1 << '\n';
    }
    return 0;
}



///  Alhamdulillah...
