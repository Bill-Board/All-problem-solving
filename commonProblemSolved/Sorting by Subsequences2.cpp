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
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    v99 n,x;cin>>n;
    vector<pair<v99,v99>> a(n);
    for(v99 i=0;i<n;i++){
    v99 x;cin>>x;a[i]={x,i};}
    sort(a.begin(),a.end());
    vector<bool>seen(n);
    vector<vector<v99>>ans;x=0;
    for(v99 i=0;i<n;i++)
    {
        if(seen[i])continue;
        v99 j=i;
        vector<v99>c;
        while(1)
        {
            seen[j]=true;
            c.push_back(j);
            j=a[j].second;
            if(i==j)break;
        }
        ans.push_back(c);
    }
    cout<<ans.size()<<ses;
    for(const vector<v99>&c:ans)
    {
        cout<<c.size()<<whp;
        for(const v99 i:c)
            cout<<i+1<<whp;cout<<ses;
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
