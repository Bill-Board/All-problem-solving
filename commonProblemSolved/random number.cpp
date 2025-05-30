#include<bits/stdc++.h>
using namespace std;

const int N = 20;

mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());
long long get_rand(long long l, long long r)   // random number from l to r
{
    assert(l <= r);
    return l + rnd() % (r - l + 1);
}

int main()
{
	int idx = 3;
	char x[] = "out00000000000000000000000000000000.txt";
	for (int ii = 0; ii < 10; ii++){
		if (x[idx] == '9')
			idx++;
		freopen(x, "w", stdout);
		x[idx]++;
		int n = 200000;
		cout << n << '\n';
		for(int j = 0; j<n; j++){
            ll l = 1, r = 1e5;
            cout << get_rand(l, r) << '\n';
		}
	}
}

