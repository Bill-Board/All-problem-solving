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
    int n;cin>> n;
    map<string,string>mpp;
    map<string,int> p;
    while(n--){
        int typ;
        cin>> typ;
        if(typ == 1){
            string s, t;
            cin>> s >> t;
            if(mpp.count(t)==0){
                p[s]++;
                mpp[t]=s;
                mpp.erase(s);
            }
            else{
                if(mpp.count(s)>0)
                mpp[s]=s;
            }

        }
        else{
            string s; cin>> s;
            if(mpp.count(s)>0)
                cout << mpp[s] << '\n';
            else if(p.count(s)==0){
                mpp[s]=s;
                cout << mpp[s] << '\n';
            }
            else
                cout << "Not in use!\n";
        }
    }
}



signed main()
{
     int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
