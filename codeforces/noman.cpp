//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME

/*First of all we calculate prime numbers using SieveOfEratosthenes using minimum prime factor, then we calculate the number of divisor
for each number. so that we can calculate number of divisor for max(a*b*c)number.
Time complexity is O(a*b*c log(a*b*c));*/

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N = 1000015;
ll mod= 1e9+7;
/* if string size greater than 10, then we print first char then size-2 then last char
time complexity O(1) */


void solve(int tc)
{
    string s;
    cin >> s;
    if(s.size()>10)
        cout << s[0] << s.size()-2 << s.back() << '\n';
    else
        cout << s << '\n';
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
