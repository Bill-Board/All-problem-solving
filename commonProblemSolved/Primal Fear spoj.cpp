//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000005;


int prime[N];
vector<int> p;
bool alabu(int n){
    int g = 10, val = n;
    while(val > 0){
        int kot =  n % g;
        if(prime[kot] or val%10 == 0)
            return false;
        g *= 10;
        val /= 10;
    }
    return true;
}

void sieve(int n){
    prime[1] = prime[0] = true;
    for(int i =2; i<=n ; i++){
        if(prime[i]==false){/// i is prime;
            if(alabu(i))
                p.push_back(i);
            for(int j = 2*i ; j <=n ; j+= i)
                prime[j]=true;
        }
    }

}

void solve()
{
    int n ; cin >> n;
    int pos = upper_bound(p.begin(),p.end(), n) - p.begin();
    cout << pos << endl;
}



signed main()
{
    sieve(1000001);
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
