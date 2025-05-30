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
v99 w=INT_MAX,tree[4*mxi+1];
vector<v99>a;
void segtree(v99 node,v99 st,v99 ed)
{
    tree[node]=0;
    if(st==ed){tree[node]=a[st];return;}
    v99 mid=(st+ed)/2;
    segtree(2*node,st,mid);
    segtree(2*node+1,mid+1,ed);
    tree[node]=tree[2*node]+tree[2*node+1];
}
v99 query(v99 node,v99 st,v99 ed,v99 l, v99 r)
{
    if(ed<l || st>r)return 0;  /// fully outside
    if(l<=st && ed<=r)return tree[node]; /// fully in side
    v99 mid=(st+ed)/2;
    v99 p1=query(2*node,st,mid,l,r);
    v99 p2=query(2*node+1,mid+1,ed,l,r);
    return p1+p2;
}
void update(v99 node,v99 st,v99 ed,v99 ind,v99 val)
{
    if(ed<ind || st>ind)return;
    if(st==ed)
    {
        tree[node]=val;return;
    }
    v99 mid=(st+ed)/2;
    if(mid>=ind)update(2*node,st,mid,ind,val);
    else update(2*node+1,mid+1,ed,ind,val);
    tree[node]=tree[2*node]+tree[2*node+1];
}



bool prime(int n)
{
    if(n==1)return false;
    if(n==2 || n==3)return true;
    if(n%2==0)return false;
    else if(n%3==0)return false;
    else
    {
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0)return false;
            else if(n%(i+2)==0) return false;
            else if(n%(i+4)==0)return false;
        }
        return true;
    }
}


int main()
{
    //test
    {
        v99 m,n;cin>>n;a.clear();a.push_back(0);
        for(v99 i=0;i<n;i++){v99 x;cin>>x;
        bool flag=prime(x);//a.push_back(x);
        if(flag)a.push_back(1);
        else a.push_back(0);
        }
        //for(auto i:a)cout<<i<<whp;cout<<ses;
        cin>>m;
        segtree(1,1,n);
        //for(v99 i=1;i<=2*n-1;i++)cout<<tree[i]<<whp;cout<<ses;
        //cout<<"Case "<<++q<<":\n";
        while(m--)
        {
            v99 q,l,r;cin>>q>>l>>r;
            if(q==2){if(prime(r))r=1;else r=0;
                    update(1,1,n,l,r);}
            else cout<<query(1,1,n,l,r)<<ses;
            //for(v99 i=1;i<=2*n-1;i++)cout<<tree[i]<<whp;cout<<ses;
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
