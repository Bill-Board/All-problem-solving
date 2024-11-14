//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100005;
int lp[N+1];
vector<int> pr;

void mpf()
{
    for(int i=2;i<=N;i++)
    {
        if(lp[i]==0)lp[i]=i,pr.push_back(i);
        for(int j=0;j<pr.size() and pr[j]<=lp[i] and i*pr[j]<=N;j++)
            lp[i*pr[j]]=pr[j];
    }
}

map < int ,vector<int> >tom;
map< int , int > pos;
void alabu(int x, int ind){

    while(x>1){
        int kot = lp[x];
        tom[ind].push_back(kot);
        pos[kot] = max(pos[kot], ind);
        //cout << kot << endl;
        while( x % kot == 0){
            x /= kot;
        }
    }
}



void solve()
{
    ll n;
    cin >> n;
    vector <int > a(n);
    pos.clear();tom.clear();
    for(int i = 0; i<n; i++){
        cin >> a[i];
        alabu(a[i], i);
    }
    int last  = 0;
    for(int i = 0; i<= last; i++){
        for(auto j: tom [i])
            last = max(last, pos[j]);
    }
    cout << last + 1<< endl;


}



signed main()
{
    mpf();
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
