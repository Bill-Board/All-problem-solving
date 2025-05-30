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
#define mxi 100002
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 1000000000000000
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int>> gquiz;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
vector<pair<v99,v99>>a[mxi];
v99 ans[mxi];
void djktra(vector<v99>&dist,v99 n)
{
    priority_queue <pair<v99,v99>, vector<pair<v99,v99>>, greater<pair<v99,v99>>> pq;
    pq.push(make_pair(0,1));
    dist[1]=0;
    while(!pq.empty())
    {
        v99 x=pq.top().second;pq.pop();
        for(auto u:a[x])
        {
            v99 v=u.first;
            v99 weigth=u.second;
            if(dist[v]>dist[x]+weigth)
            {
                dist[v]=dist[x]+weigth;
                pq.push(make_pair(dist[v],v));
                ans[v]=x;
            }
        }
    }
}


int main()
{
    //test
    //while(1)
    {
        v99 n,m;cin>>n>>m;
        vector<v99>dist(mxi,INF);
        memset(ans,0,sizeof ans);
        for(v99 i=0;i<m;i++)
        {
            v99 x,y,w;cin>>x>>y>>w;
            a[x].push_back(make_pair(y,w));
            a[y].push_back(make_pair(x,w));
        }
        djktra(dist,n);
        if(dist[n]==INF)return cout<<-1<<ses,0;
        ///4 5 5 3 0
        vector<v99>ans2;
        v99 i=n;
        while(i!=1)
        {
            ans2.push_back(i);
            i=ans[i];
        }ans2.push_back(1);
        reverse(ans2.begin(),ans2.end());
        for(auto i:ans2)cout<<i<<whp;cout<<ses;
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

