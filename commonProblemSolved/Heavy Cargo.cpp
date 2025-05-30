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
v99 prims(v99 ind,v99 endd)
{
    priority_queue< pair<v99,v99> >q;
    q.push(make_pair(INF,ind));
    val[ind]=INF;v99 sum=LLONG_MAX;
    while(!q.empty())
    {
        v99 u=q.top().second;sum=min(sum,q.top().first);
        q.pop();visi[u]=1;
        if(u==endd)return sum;
        for(auto i:tom[u])
        {
            v99 index=i.first,cost=i.second;
            if(!visi[index] && val[index]<cost)
            {
                val[index]=cost;
                q.push(make_pair(cost,index));
                ans[index]=u;
            }
        }
    }
}


void out(v99 n)
{
    rep0(i,0,n){for(auto j:tom[i])cout<<j.first<<whp;cout<<ses;}
}





int main()
{
    v99 k=1;
    while(1)
    {
        map < string, v99 > mymap;
        v99 n,m,assign=0;cin>>n;cin>>m;
        if(n==0 && m==0)return 0;
        CLR(val,0);CLR(visi,0);
        while(m--)
        {
            string s1, s2;v99 c;
            cin >> s1;
            cin >> s2;cin>>c;
            if (mymap.find(s1) == mymap.end())
            {
                //printf("Mapping %s with %d\n", s1, assign);
                mymap[s1] = assign++;
            }
            if (mymap.find(s2) == mymap.end())
            {
                //printf("Mapping %s with %d\n", s2, assign);
                mymap[s2] = assign++;
            }
            v99 x = mymap[s1];
            v99 y = mymap[s2];
            addEdge(x,y,c);
        }string s1, s2;
            cin >> s1;
            cin >> s2;//out(n);
        v99 start=mymap[s1],endd=mymap[s2];
        cout<<"Scenario #"<<k++<<ses;
        cout<<prims(start,endd)<<" tons"<<ses<<ses;
        mymap.clear();
        rep1(i,0,n)tom[i].clear();
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

