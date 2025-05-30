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
#define mxi 4444444447
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
map<v99,v99>mpp;
void sum(v99 n)
{
    queue<v99>q;
    q.push(4);q.push(7);v99 i=1;
    while(q.front()<=mxi)
    {
        v99 x=q.front();q.pop();mpp[x]=i++;
        q.push(x*10+4);
        q.push(x*10+7);
    }
}
int main()
{
    //test
    //while(1)
    {
        v99 n;cin>>n;sum(n);mpp[4444477777]++;
        //for(auto i:mpp)cout<<i.first<<ses;
        vector<v99>vec;
        for(auto i:mpp)
        {
            v99 val=i.first;
            string s=to_string(val);v99 fs=0,svs=0;
            for(v99 j=0;j<s.size();j++)
            {
                if(s[j]=='4')fs++;
                if(s[j]=='7')svs++;
            }
            if(fs==svs)vec.push_back(val);
        }
        //for(auto i:vec)cout<<i<<whp;cout<<ses;

        v99 pos=lower_bound(vec.begin(),vec.end(),n)-vec.begin();
        cout<<vec[pos]<<ses;
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


