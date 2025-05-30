 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 tree[mxi*4];
v99 query(v99 ind,v99 n)
{
    v99 sum=0;//cout<<"ind "<<ind<<ses;
    while(ind>0 && ind<=n)
    {
        sum+=tree[ind];
        ind-=(ind&(-ind));
    }
    return sum;
}
void update(v99 ind,v99 x,v99 n)
{
    while(ind>0 &&ind<=n)
    {
        tree[ind]+=x;
        ind+=ind & (-ind);
    }
}

int main()
{
    //test
    {
        v99 n,m;cin>>n>>m;v99 a[n+1];
        memset(tree,0,n+2);a[0]=0;
        for(v99 i=1;i<=n;i++){cin>>a[i];}
        for(v99 i=1;i<=n;i++){update(i,a[i],n);}
        //for(v99 i=1;i<=n;i++)cout<<tree[i]<<whp;cout<<ses;
        //IOS
        while(m--)
        {
            v99 l, r;cin>>l>>r;--l;
            cout<<query(r,n)-query(l,n)<<ses;
        }
    }
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
