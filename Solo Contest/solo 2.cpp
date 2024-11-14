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

int alabu(){
    vector<int>b;
    //for(auto i: a)cout << i << ' ';cout << '\n';
    for(auto i: a){
        if(b.empty())
            b.push_back(i);
        else{
            if(b.back()<=i)
                b.push_back(i);
            else{
                auto j = upper_bound(b.begin(),b.end(), i);
                *j = i;
            }
        }

    }
    //for(auto j: b)cout << j << " ";cout << '\n';
    return b.size();
}


void solve(int tc)
{
    int n, t; cin >> n >> t;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int ok = alabu();
    cout << ok << '\n';
    if(t==1){
        cout << ok << '\n';
        return;
    }

    for(int i = 0; i<n; i++)
        a.push_back(a[i]);
    int dif = alabu() - ok;
    cout << dif << '\n';
    cout << ok +  dif* (t-1) <<'\n';


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
