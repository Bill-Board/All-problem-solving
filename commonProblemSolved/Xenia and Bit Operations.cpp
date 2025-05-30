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
v99 arr[3*mxi],cnt[3*mxi];
v99 n,tree[mxi*3];
void init(v99 node,v99 b, v99 e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return ;
    }
    v99 left=node*2;
    v99 right=node *2 +1;
    v99 mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    auto l=upper_bound(cnt,cnt+n+1,node);
    v99 pos=l-cnt;
    if((n%2==0 && pos%2==0)||(n%2!=0 && pos%2!=0))tree[node]=tree[right] | tree[left];
    else tree[node]=tree[right]^tree[left];

}

void update(v99 node, v99 b, v99 e, v99 i, v99 newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    v99 Left=node*2;
    v99 Right=node *2 +1;
    v99 mid = (b + e) / 2;
    if(mid>=i) update(Left, b, mid, i, newvalue);
    else update(Right, mid + 1, e, i, newvalue);
    auto l=upper_bound(cnt,cnt+n+1,node);
    v99 pos=l-cnt;
    if((n%2==0 && pos%2==0)||(n%2!=0 && pos%2!=0))tree[node]=tree[Right] | tree[Left];
    else tree[node]=tree[Right]^tree[Left];
}

//auto l=upper_bound(cnt,cnt+n,k);cout<<l-cnt-1<<ses;
int main()
{
    v99 m;
    cin>>n>>m;//n=1<<n;cout<<n<<ses;
    for(v99 i=1;i<=n+2;i++)cnt[i]=1<<i;
    for(v99 i=1;i<=cnt[n];i++)cin>>arr[i];
    v99 hbe=1<<n;
    init(1,1,cnt[n]); //for(v99 i=1;i<=(2*hbe-1);i++)cout<<tree[i]<<whp;cout<<ses;
    while(m--)
    {
        v99 x,y;cin>>x>>y;
        update(1,1,cnt[n],x,y);
        cout<<tree[1]<<ses;
        //for(v99 i=1;i<=(2*hbe-1);i++)cout<<tree[i]<<whp;cout<<ses;
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

