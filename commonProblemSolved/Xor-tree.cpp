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
}
vector<v99>jerry,tom[mxi];
v99 val[mxi],goal[mxi],visi[mxi];
v99 bfs(v99 ind,v99 maa,v99 dada)
{
    queue<pair<pair<v99,v99>,v99> >q;v99 ans=0;
    q.push(make_pair(make_pair(ind,maa),dada));
    while(!q.empty())
    {
        auto it=q.front();q.pop();
        v99 id=it.first.first,m=it.first.second,d=it.second;visi[id]=1;
        val[id]=(val[id]^d)%2;
        if(val[id]!=goal[id]){++d;
            jerry.push_back(id);}
        for(auto i:tom[id])
        {
            if(!visi[i])
            {
                q.push(make_pair(make_pair(i,d),m));
            }
        }
    }
}


int main()
{
    //test
    //while(1)
    {
        v99 n;cin>>n;
        rep0(i,0,n-1)
        {
            v99 x,y;cin>>x>>y;
            tom[x].push_back(y);
            tom[y].push_back(x);
        }
        rep1(i,1,n)cin>>val[i];
        rep1(i,1,n)cin>>goal[i];
        bfs(1,0,0);
        cout<<jerry.size()<<ses;
        for(auto i:jerry)cout<<i<<ses;
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

