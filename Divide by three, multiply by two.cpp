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
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 0x3f3f3f3f
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int>> pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 n;
map<v99,v99>mpp,mpp2;
vector<v99>vec;

bool bfs(v99 ind)
{
    queue<v99>q;vec.clear();
    q.push(ind);
    while(!q.empty())
    {
        v99 x=q.front();q.pop();vec.push_back(x);
        if(x%3==0)
        {
            if(mpp[x/3])q.push(x/3);
        }
        if(mpp[x*2])q.push(x*2);
        if(vec.size()==n)return true;
    }
    return false;
}
int main()
{
    //test
    //while(1)
    {
        cin>>n;v99 a[n];
        for(v99 i=0;i<n;i++)cin>>a[i],mpp[a[i]]++;
        for(v99 i=0;i<n;i++){if(bfs(a[i]))break;}
        for(auto i:vec)cout<<i<<whp;cout<<ses;
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

