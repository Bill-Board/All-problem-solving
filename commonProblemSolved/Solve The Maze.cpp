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
#define mxi 200003
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
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
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}char a[60][60];v99 G=0,B=0,n,m,visi[60][60];
void dfs(v99 indx,v99 indy)
{
    visi[indx][indy]=1;
    if(a[indx][indy]=='G')G++;
    if(a[indx][indy]=='B')B++;
    rep0(i,0,4)
    {
        v99 x=indx+fx[i];
        v99 y=indy+fy[i];
        if(x<n && y<m && y>=0 && x>=0 && a[x][y]!='#' && !visi[x][y])dfs(x,y);
    }
}




int main()
{
    test
    //while(1)
    {
        cin>>n>>m;v99 ga=0;G=0;B=0;CLR(visi,0);
        rep0(i,0,n)
        {
            rep0(j,0,m)
            {
                cin>>a[i][j];
                if(a[i][j]=='G')ga++;
            }
        }
        rep0(i,0,n)
        {
            rep0(j,0,m)
            {
                if(a[i][j]=='B')
                {
                    rep0(k,0,4)
                    {
                        v99 x=i+fx[k];
                        v99 y=j+fy[k];
                        if(x<n && y<m && y>=0 && x>=0 && a[x][y]=='.')a[x][y]='#';
                    }
                }
            }
        }dfs(n-1,m-1);
        if(ga==0)cout<<"YES"<<ses;
        else if(ga==G && B==0)cout<<"YES"<<ses;
        else cout<<"NO"<<ses;
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

