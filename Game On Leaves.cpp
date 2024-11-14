 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test  long long t;cin >> t;while(t--)
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
vector<v99>ans,tom[1003];
v99 visi[1004];map<v99,v99>level;
v99 bfs(v99 ind)
{
    v99 cr_h=0;
    queue<v99>q;q.push(ind);
    while(!q.empty())
    {
        v99 x=q.front();q.pop();visi[x]=1;
        cr_h++;
        for(auto i:tom[x])
        {
            if(!visi[i]){q.push(i);level[i]=level[x]+1;}
        }
    }return cr_h-1;
}




int main()
{
    test
    //while(1)
    {
        rep1(i,1,1002)tom[i].clear();CLR(visi,0);
        v99 n,x;cin>>n>>x;
        rep1(i,1,n-1)
        {
            v99 z,y;cin>>z>>y;
            tom[z].push_back(y);
            tom[y].push_back(z);
        }
        if(tom[x].size()<=1){cout<<"Ayush"<<ses;continue;}
        v99 mot=n-1;
        if(mot==0)cout<<"Ashish"<<ses;
        else if(mot&1)cout<<"Ayush"<<ses;
        else cout<<"Ashish"<<ses;

        /*vector<v99>jerry;
        for(auto i:ans)jerry.push_back(level[i]);
        sort(jerry.begin(),jerry.end());reverse(jerry.begin(),jerry.end());
        v99 cr_h=0;
        for(auto i:jerry)
        {
            if(i<=1)break;
            cr_h++;
        }
        if(cr_h&1)cout<<"Ayush"<<ses;
        else cout<<"Ashish"<<ses;*/


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

