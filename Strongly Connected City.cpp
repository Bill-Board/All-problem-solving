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
#define mxi 200000
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a) memset(a,0,sizeof a)
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
v99 row[22],clm[22],visi[21][21];v99 n,m,crush_=0;
void inti()
{
    for(v99 i=1;i<=n;i++)
    {
        char c;cin>>c;
        if(c=='>')row[i]=1;
        else row[i]=-1;
    }
    for(v99 i=1;i<=m;i++)
    {
        char c;cin>>c;
        if(c=='v')clm[i]=1;
        else clm[i]=-1;
    }
}
void dfs(v99 indx,v99 indy)
{
    crush_++;//cout<<indx<<whp<<indy<<ses;
    visi[indx][indy]=1;
    v99 x=indx+clm[indy];
    v99 y=indy+row[indx];
    //cout<<"x "<<x<<whp<<indy<<" ok "<<indx<<whp<<y<<ses;
    if( x<=n && x>0 && !visi[x][indy] )dfs(x,indy);
    if( y<=m && y>0 && !visi[indx][y])dfs(indx,y);
    /*if(row[indx]==1 && indx+1<=n && indx+1>0 && !visi[indx+1][indy])dfs(indx+1,indy);
    if(clm[indy]==1 && indy+1<=m && indy+1>0 && !visi[indx][indy+1])dfs(indx,indy+1);
    if(row[indx]==-1 && indx-1<=n && indx-1>0 && !visi[indx-1][indy])dfs(indx-1,indy);
    if(clm[indy]==-1 && indy-1<=m && indy-1>0 && !visi[indx][indy-1])dfs(indx,indy-1);*/
}
int main()
{
    //test
    //while(1)
    {
        cin>>n>>m;inti();CLR(visi);
        rep1(i,1,n)
        {
            rep1(j,1,m)
            {
                CLR(visi);crush_=0;
                dfs(i,j);//cout<<crush_<<ses;
                if(crush_!=(n*m))return cout<<"NO"<<ses,0;
            }
        }
        cout<<"YES"<<ses;
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


