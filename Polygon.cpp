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
#define CLR(a) memset(a,0,sizeof(a));
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
v99 duix[2]={-1,0};
v99 duiy[2]={0,-1};
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
}
v99 n,visi[100][100];
char ogy[100][100];
void dfs(v99 indx,v99 indy)
{
    //cout<<indx<<whp<<indy<<ses;
    visi[indx][indy]=1;
    //if(indx==n || indy==n){ok=true;return;}
    for(v99 i=0;i<2;i++)
    {
        v99 x=indx+duix[i];
        v99 y=indy+duiy[i];
        if(x>0 && y>0 && ogy[x][y]=='1')dfs(x,y);
    }
}



int main()
{
    test
    //while(1)
    {
        CLR(visi);
        cin>>n;
        rep1(i,1,n)
        {
            rep1(j,1,n)
            {
                cin>>ogy[i][j];
            }
        }bool ok=false;
        rep1(i,1,n)
        {
            rep1(j,1,n)
            {
                if(ogy[i][j]=='1')
                {
                    if((i<n && ogy[i+1][j]!='1')&& (j<n && ogy[i][j+1]!='1') )
                    {

                        cout<<"NO"<<ses;ok=true;
                        break;
                    }
                }
            }
            if(ok)break;
        }
        if(!ok)cout<<"YES"<<ses;
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

