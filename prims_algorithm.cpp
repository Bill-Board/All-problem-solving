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
}
vector<pair<v99,v99> >tom[mxi];
v99 visi[mxi],val[mxi],ans[mxi];
void addEdge(v99 x,v99 y,v99 c)
{
    tom[x].push_back(make_pair(y,c));
    tom[y].push_back(make_pair(x,c));
}
void prims(v99 ind)
{
    priority_queue< pair<v99,v99>, vector<pair<v99,v99> >, greater<pair<v99,v99> > >q;
    q.push(make_pair(0,ind));
    val[ind]=0;
    while(!q.empty())
    {
        v99 u=q.top().second;q.pop();visi[u]=1;
        for(auto i:tom[u])
        {
            v99 index=i.first,cost=i.second;
            if(!visi[index] && val[index]>cost)
            {
                val[index]=cost;
                q.push(make_pair(cost,index));
                ans[index]=u;
            }
        }
    }
}








int main()
{
    //test
    //while(1)
    {
        v99 n=9;CLR(val,INF);
        addEdge( 0, 1, 4);
        addEdge(0, 7, 8);
        addEdge(1, 2, 8);
        addEdge(1, 7, 11);
        addEdge(2, 3, 7);
        addEdge(2, 8, 2);
        addEdge(2, 5, 4);
        addEdge(3, 4, 9);
        addEdge(3, 5, 14);
        addEdge(4, 5, 10);
        addEdge(5, 6, 2);
        addEdge(6, 7, 1);
        addEdge(6, 8, 6);
        addEdge(7, 8, 7);
        prims(0);
        rep0(i,1,n)cout<<ans[i]<<whp<<i<<ses;
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

