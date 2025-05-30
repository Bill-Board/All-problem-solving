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
#define mxi 15
#define crush auto
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
v99 koijabek[6]={1,0,0,-1,0,0};
v99 koijabex[6]={0,1,0,0,-1,0};
v99 koijabey[6]={0,0,1,0,0,-1};
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}

char a[mxi][mxi][mxi];
v99 k,n,m,bow=0,visi[mxi][mxi][mxi];
void ami_biye_korbo(v99 nam,v99 pic,v99 phn_n)
{
    ++bow;
    visi[nam][pic][phn_n]=1;
    rep0(chinina,0,6)
    {
        v99 vaiya=nam+koijabek[chinina];
        v99 vaiya1=pic+koijabex[chinina];
        v99 vaiya2=phn_n+koijabey[chinina];
        if(vaiya>0 && vaiya<=k && vaiya1>0 && vaiya1<=n && vaiya2>0 && vaiya2<=m &&  visi[vaiya][vaiya1][vaiya2]==0 && a[vaiya][vaiya1][vaiya2]=='.')
            ami_biye_korbo(vaiya,vaiya1,vaiya2);
    }
}
int main()
{
    //test
    //while(1)
    {
        cin>>k>>n>>m;
        rep1(i,1,k)
        {
            rep1(j,1,n)
            {
                rep1(p,1,m)
                {
                    cin>>a[i][j][p];
                }
            }
        }
        v99 ogy,tom;cin>>ogy>>tom;
        ami_biye_korbo(1,ogy,tom);
        cout<<bow<<ses;

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

