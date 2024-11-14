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
bool isvwl(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ;
}

bool cmp(const char &a,const char &b){
    if(isvwl(a) and isvwl(b))
        return a > b;
}

void solve(int tc)
{
    string s; cin >> s;
    sort(s.begin(),s.end(), cmp);
    cout << s << '\n';

}



signed main()
{
    int test_case=1;
    //ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
