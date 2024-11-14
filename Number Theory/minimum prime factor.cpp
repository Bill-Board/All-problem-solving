//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME


// Shoeb Akibul Islam
// Dept of ICE, NSTU


#include<bits/stdc++.h>
using namespace std;
const int N = 500000;
int lp[N+1];
vector<int> pr;
int kot = 0;
void mpf()
{
    for(int i=2;i<=N;i++)
    {
        if(lp[i]==0)lp[i]=i,pr.pb(i);;
        for(int j=0;j<pr.size() and pr[j]<=lp[i] and i*pr[j]<=N;j++)
            lp[i*pr[j]]=pr[j];
    }
}


void solve()
{
    /// code is here-> 1400140 458461
    int n;
}



signed main()
{
    mpf();
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    //i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...
