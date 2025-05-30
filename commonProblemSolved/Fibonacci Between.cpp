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

ll f[40];
ll fibo(int n){
	if(n<2)return n;
	if(f[n]) return f[n];
	return f[n] = fibo(n-1)+fibo(n-2);
}

void solve(int tc)
{
    int l, r; cin >> l >> r;
	set<int> s;
	for(int i = 0; i<40; i++)
        s.insert(fibo(i));
	for(auto i: s)
		if(l<=i and i<=r)cout << i << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...

