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
#define mxi 2000000
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a))
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
vector<v99>ans,a[mxi];
v99 kot=0,visi[mxi];
void dfs(v99 ind)
{
    visi[ind]=1;kot++;
    ans.push_back(ind);
    for(auto i:a[ind])
    {
        if(visi[i]==0)dfs(i);
    }
}




v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
int main()
{
    //test
    //while(1)
    {
        v99 n,m;cin>>n>>m;CLR(visi,0);
        rep0(i,0,m)
        {
            v99 x,k;cin>>x;
            rep0(j,0,x)
            {
                v99 xx;cin>>xx;
                if(j==0)k=xx;
                else
                {
                    a[k].push_back(xx);
                    a[xx].push_back(k);
                }
            }
        }
        rep1(i,1,n)
        {
            ans.clear();kot=0;
            if(visi[i]==0){dfs(i);
            for(auto j:ans)visi[j]=kot;
            }
        }
        rep1(i,1,n)cout<<visi[i]<<whp;cout<<ses;
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
