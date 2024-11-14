#include<bits/stdc++.h>
using namespace std;
#define mxx 900009
#define ses "\n"
#define whp " "
#define IOS   ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
//#define IOS   ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);


typedef long long ll;
typedef unsigned long long ull;

ll arr[mxx];
ll tree[mxx*3];
ll lh;

int init(ll node,ll b, ll e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        if(lh<=arr[b])
            return 1;
        else return 0;
    }
    ll left=node*2;
    ll right=node *2 +1;
    ll mid=(b+e)/2;
    ll lv=init(left,b,mid);
    ll rv=init(right,mid+1,e);
    if(lv==0 && rv==0)tree[node]=0;
    if(lv==0 && rv==1)tree[node]=1;
    else if(rv==0)tree[node]=-1;
    else tree[node]=2;
}

ll query(ll node, ll b, ll e, ll i, ll j)
{
    if(i>e || j<b)return 0;
    if(b>=i && e<=j)return tree[node];
    ll left=node*2;
    ll right=node*2 +1;
    ll mid=(e+b)/2;
    ll p1=query(left,b,mid,i,j);
    ll p2= query(right,mid+1,e,i,j);
    return p1+p2;
}

/// 10 5 10    10 9 56 43 23 3 4 45 6 59


int main()
{
    ll n,q;cin>>n>>q>>lh;
    for(ll i=1;i<=n;i++)
        cin>>arr[i];
    init(1,1,n);
    for(ll i=1;i<=(2*n-1);i++)
       cout<<tree[i]<<whp;cout<<ses;
    return 0;
}
