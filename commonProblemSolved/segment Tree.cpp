#include<bits/stdc++.h>
using namespace std;
#define mxx 900009
#define ses "\n"
#define whp " "
#define IOS   ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
//#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


typedef long long ll;
typedef unsigned long long ull;

ll arr[mxx];
ll tree[mxx*3];

void init(ll node,ll b, ll e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return ;
    }
    ll left=node*2;
    ll right=node *2 +1;
    ll mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=tree[right]+tree[left];
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

void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return; //বাইরে চলে গিয়েছে
    if (b >= i && e <= i) { //রিলেভেন্ট সেগমেন্ট
        tree[node] = newvalue; //নতুন মান বসিয়ে দিলাম
        return;
    }
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}


int main()
{
    //IOS
    ll n,q;cin>>n>>q;
    for(ll i=1;i<=n;i++)
        cin>>arr[i];
    init(1,1,n);
    //ll h=ceil(log2(n))+1;
    //h=pow(2.0,h);
    for(ll i=1;i<=n;i++)
       cout<<tree[i]<<whp;cout<<ses;
    while(q--)
    {
        ll i,j;cin>>i>>j;
        cout<<query(1,1,n,i,j)<<ses;
    }
    return 0;
}
