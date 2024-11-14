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
}v99 visi[101][101],val[101];
void printt(v99 n)
{
    rep1(i,1,n)
        {
            rep1(j,1,n)cout<<visi[i][j]<<whp;
            cout<<ses;
        }cout<<ses;
    rep1(j,1,n)cout<<val[j]<<whp;
            cout<<ses<<ses<<ses;
}

int main()
{
    //test
    //while(1)
    {
        v99 n,m;cin>>n>>m;vector<v99>tom[n+1];
        CLR(visi);CLR(val);
        rep1(i,1,m)
        {
            v99 x,y;cin>>x>>y;
            visi[x][y]=1;
            visi[y][x]=1;
            val[x]++;val[y]++;
        }
        //printt(n);
        v99 k=0;
        while(++k)
        {
            //cout<<"ok"<<ses;
            bool ok=false;
            vector<pair<v99,v99> >a;
            rep1(i,1,n)
            {
                if(val[i]==1)
                {
                    v99 j=1;
                    while(visi[i][j]!=1)j++;
                    //cout<<i<<whp<<j<<ses;
                    a.push_back(make_pair(i,j));
                }
            }
            if(a.empty())return cout<<k-1<<ses,0;
            for(auto it:a)
            {
                v99 i=it.first,j=it.second;
                val[i]--;
                val[j]--;
                visi[i][j]=0;
                visi[j][i]=0;
            }//printt(n);
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

