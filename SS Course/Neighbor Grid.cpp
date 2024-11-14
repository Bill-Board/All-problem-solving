//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU

#include<bits/stdc++.h>
using namespace std;

typedef long long v99;
#define vll    vector<v99>
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long tokp;cin >> tokp;while(tokp--)
#define ses   "\n"
#define whp   " "
#define sob(z)  (z).begin(), (z).end()
#define ff first
#define ss second
#define pii pair<v99, v99>
const v99 N=200005;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

/// code is here->----------------------------

void solve()
{
    v99 n,m,k;
    cin>>n>>m;
    v99 a[n+2][m+2],ans[n+2][m+2];
    for(v99 i =1 ; i<=n ;i++)
    {
        for(v99 j =1 ; j<=m ;j++)cin>>a[i][j];
    }
    bool ok=false;
    for(v99 i =1 ; i<=n ;i++)
    {
        for(v99 j =1 ; j<=m ;j++)
        {
            v99 kot=0;
            for(v99 k=0; k<4 ; k++)
            {
                v99 x=i+fx[k];
                v99 y=j+fy[k];
                if(x>0 && y>0 && y<=m && x<=n)
                    kot++;
            }
            ans[i][j]=kot;
            if(a[i][j]>kot)
                ok=true;
        }
    }
    if(ok)
        cout<<"NO"<<ses;
    else
    {
        cout<<"YES"<<ses;
        for(v99 i =1 ; i<=n ;i++)
        {
            for(v99 j =1 ; j<=m ;j++)cout<<ans[i][j]<<whp;
            cout<<ses;
        }
    }
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



///  Alhamdulillah...
