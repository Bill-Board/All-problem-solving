//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
vector<int> a;
bool alabu(int g, int k){
    int pos = 0, neg = 0;
    for(auto i: a){
        int ek = i % g, dui = g - ek;
        if(ek < dui){
            if(pos > neg){

            }
        }
    }
}


void solve(int tc)
{
    int n, k ,sum  = 0; cin >> n >> k;
    a.resize(n);
    for(auto &i: a)
        cin >> i, sum+=i;
    sort(a.begin(),a.end());
    vector<int> p;
    for(int i = 1; i*i<=sum; i++){
        if(sum % i == 0){
            p.push_back(i);
            if(i != sum/i)
                p.push_back(sum/i);
        }
    }
    sort(p.begin(),p.end(),greater<>());

    for(auto i: p){

    }


}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
