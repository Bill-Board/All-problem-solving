//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n+1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    v99 n, m,q;cin>>n>>m;
    string s[n+1],z[m+1];
    s[0]="_";z[0]="_";
    rep1(i,n)cin>>s[i];
    rep1(i,m)cin>>z[i];
    //rep1(i,n)cout<<s[i]<<ses;cout<<ses;
    //rep1(i,m)cout<<z[i]<<ses;cout<<ses;
    cin>>q;
    while(q--)
    {
        v99 x,y;cin>>x;y=x;
        if(x>n && x<=2*n)x=x-n;
        else if(x>2*n)
        {
            x=x%n;
            if(x==0)x=n;
        }
        if(y>m && y<=2*m)y=y-m;
        else if(y>2*m)
        {
            y=y%m;
            if(y==0)y=m;
        }
        //cout<<x<<whp<<y<<ses;
        cout<<s[x]<<z[y]<<ses;
    }
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
