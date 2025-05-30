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
    int n, k;
    cin >> n >> k;
    priority_queue < ll > pqneg;
    ll sum_pos=0, sum_neg=0, mn = LLONG_MAX;
    ll baki_sum = 0, answer = -LLONG_MAX;
    int negetive = 0;
    for(int i =0; i<n ; i++){
        ll x; cin >> x;
        if(x >= 0){/// positive value
            sum_pos += x;
            mn = min(mn, x);
        }
        else{/// negative value
            negetive ++;
            if(pqneg.size() < k){
                sum_neg += abs(x);
                pqneg.push(x);
            }
            else{
                if(pqneg.top() > x){
                    sum_neg -= abs(pqneg.top());
                    baki_sum += abs(pqneg.top());
                    pqneg.pop();
                    sum_neg += abs(x);
                    pqneg.push(x);
                }
                else
                    baki_sum += abs(x);
            }
        }
        answer = max(answer, sum_pos + sum_neg - baki_sum);
    }
    if(negetive < k  and (k - negetive)&1)
        answer -= min(mn, abs(pqneg.top()));

    cout << answer << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
