//BISMIllAHIR RAHMANIR RAHEEM
//AllAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100000005;
int prime[(N/32)+1], kot = 0;
vector<ll>pr;
bool chk(int n,int pos)
{
    return (bool)(n&(1<<pos));
}
int sett(int n,int pos)
{
    n=n|(1<<pos);
    return n;
}
void bitwise_sieve()
{
    pr.push_back(2);
    int sq=sqrt(N)+1;
    for(ll i=3; i<=N; i+=2)
    {
        if(!chk(prime[i>>5],i&31))
        {
            pr.push_back(i);
            for(ll j=i*i; j<=N; j+=2*i)
                prime[j>>5]=sett(prime[j>>5],j&31), kot++;
        }
    }

//    for(int i =3; i<=N ; i+=2)
//        if(!chk(prime[i>>5],i&31))
//            pr.push_back(i), kot++;

}
void solve()
{
    int n;
    cin >> n;
    ll temp = n;
    ll sod = 1;
    int sq = sqrt(n) + 2;
    for(int i = 0 ; i < pr.size() and i*i < temp; i++){
        if(temp == 1)break;
        ll p = pr[i];
        ll gun = p;
        while(temp % p == 0)
        {
            temp /= p;
            gun *= p;
        }
        if(gun > p)
            sod *= (gun - 1)/(p - 1);
    }
    if(temp > 1)
        sod *= ( temp + 1 );
    cout << sod - n << endl;
    //cout << pr.back() << endl;/// 102046873 96285419
}



signed main()
{
    bitwise_sieve();
    int test_case=1;
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamduliintah...
