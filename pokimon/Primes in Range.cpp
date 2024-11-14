//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000005;
ll mod= 1e9+7;
int prime[N+3];
void SieveOfEratosthenes()
{
	for (ll p=3; p<=N; p+=2)
	{
		if (prime[p] == 0)
		{
			for (ll i=p*p; i<=N; i += 2*p)
				prime[i] = 1;
		}
	}
	prime[1]=1;
	for(int i = 1; i<=N; i++){
        if(i !=2 and i%2==0) prime[i] = 1;
        prime[i] ^= 1;
        prime[i]+=prime[i-1];
	}

}
void solve(int tc)
{
    int n, m;cin >> n>> m;

    cout << prime[m] - prime[n-1] << '\n';
}



signed main()
{
    SieveOfEratosthenes();
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
