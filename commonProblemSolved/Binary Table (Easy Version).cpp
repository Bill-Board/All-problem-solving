 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME


// Shoeb Akibul Islam
// Dept of ICE, NSTU


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu  long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define pii pair<long long, long long>
#define pf printf
#define sf scanf
#define ff first
#define sob(z)  (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
using namespace __gnu_pbds;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {1, 1,  -1, -1};
v99 oy8[] = {1, -1, -1, 1};
bool sort2val(const pii &a,const pii &b)
{
    if(a.second==b.second)return a.first<b.first;
    return a.second<b.second;
}
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }


typedef tree< v99, null_type, less<v99>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
/// find_by_order(k) – kth index a ki ache, pointer return korbe.
/// order_of_key(x) – x kon position a ache , oita bole dibe

v99 a[104][104],n,m;
vector<v99>ans;
void out()
{
    cout<<ans.size()/6LL<<ses;
    for(v99 i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<whp;
        if(i%6==5)cout<<ses;
    }
}
void re_tri()
{
    rep1(i,1,n)
    {
        rep1(j,1,m)
        {
            vector<pii>p;
            if(a[i][j])p.pb({i,j});
            if(a[i][j+1])p.pb({i,j+1});
            if(a[i+1][j])p.pb({i+1,j});
            if(a[i+1][j+1])p.pb({i+1,j+1});

            if(p.size()==3)
            {
                a[i][j]=a[i][j+1]=a[i+1][j]=a[i+1][j+1]=0;
                for(auto k:p)ans.pb(k.ff),ans.pb(k.ss);
            }
            else if(p.size()==4)
            {
                rep0(ii,0,p.size()-1)ans.pb(p[ii].ff),ans.pb(p[ii].ss),a[p[ii].ff][p[ii].ss]=0;
            }
        }
    }//cout<<"re ";out();
}


void kona()
{
    rep1(i,1,n)
    {
        rep1(j,1,m)
        {
            if(a[i][j])
            {
                rep0(k,0,4)
                {
                    v99 x=i+ox8[k],y=j+oy8[k];
                    if(a[x][y])
                    {
                        a[i][j]=a[x][y]=a[i][y]=a[x][j]=0;
                        ans.pb(i);ans.pb(j); ans.pb(i);ans.pb(y);ans.pb(x);ans.pb(j);
                        ans.pb(x);ans.pb(y); ans.pb(i);ans.pb(y);ans.pb(x);ans.pb(j);
                        break;
                    }
                }
            }
        }
    }//cout<<"kona ";out();
}
void ok(v99 i,v99 j)
{
    vector<pii>p,q;
    if(!a[i][j])p.pb({i,j});
    else q.pb({i,j});
    if(!a[i][j+1])p.pb({i,j+1});
    else q.pb({i,j+1});
    if(!a[i+1][j])p.pb({i+1,j});
    else q.pb({i+1,j});
    if(!a[i+1][j+1])p.pb({i+1,j+1});
    else q.pb({i+1,j+1});
    if(p.size()!=2)return;
    a[i][j]=a[i+1][j]=a[i][j+1]=a[i+1][j+1]=0;
    ans.pb(q[0].ff);ans.pb(q[0].ss); ans.pb(p[0].ff);ans.pb(p[0].ss);ans.pb(p[1].ff);ans.pb(p[1].ss);
    ans.pb(q[1].ff);ans.pb(q[1].ss);ans.pb(p[0].ff);ans.pb(p[0].ss);ans.pb(p[1].ff);ans.pb(p[1].ss);
}
void duita()
{
    rep1(i,1,n)
    {
        rep1(j,1,m)
        {
               ok(i,j);
        }
    }//cout<<"duita ";out();
}
void ekta()
{
    rep1(i,1,n)
    {
        rep1(j,1,m)
        {
            if(a[i][j])
            {
                if(i<n and j<m)
                {
                    a[i][j]=0;a[i+1][j]=a[i+1][j+1]=1;
                    ans.pb(i);ans.pb(j);ans.pb(i+1);ans.pb(j);ans.pb(i+1);ans.pb(j+1);
                    ok(i,j);
                }
                else if(i==n and j==m)
                {
                    a[i][j]=0;a[i-1][j-1]=a[i][j-1]=1;
                    ans.pb(i);ans.pb(j);ans.pb(i-1);ans.pb(j-1);ans.pb(i);ans.pb(j-1);
                    ok(i-1,j-1);
                }
                else if(j==m)
                {
                    a[i][j]=0;a[i+1][j]=a[i+1][j-1]=1;
                    ans.pb(i);ans.pb(j);ans.pb(i+1);ans.pb(j);ans.pb(i+1);ans.pb(j-1);
                    ok(i,j-1);
                }
                else
                {
                    a[i][j]=0;a[i][j+1]=a[i-1][j]=1;
                    ans.pb(i);ans.pb(j);ans.pb(i);ans.pb(j+1);ans.pb(i-1);ans.pb(j);
                    ok(i-1,j);
                }
            }
        }
    }//cout<<"ekta ";out();
}
void solve()
{
    /// code is here->
    cin>>n>>m;
    rep1(i,1,n)
    {
        rep1(j,1,m)
        {
            char c;cin>>c;
            a[i][j]+=(c=='1');
        }
    }
    re_tri();
    kona();
    duita();
    ekta();
    out();ans.clear();
}



signed main()
{
    dua
    //freopen("data.out","w",stdout);
    //while(1)
    i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...
