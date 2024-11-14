//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//
//memset(arr,0,sizeof(hg));
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    v99 n,q=0;cin>>n;
    vector<pair<v99,v99> >vec;
    map<v99,v99>mpp;
    for(v99 i=0;i<n;i++)
    {
        v99 x,y;cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    sort(vec.begin(),vec.end());bool lft=true,rht=true;
    if(n<=2)return cout<<n<<ses,0;
    v99 h=vec[0].first;
    for(v99 i=1;i<n-1;i++)
    {
        v99 x=vec[i].first,y=vec[i].second;
        if(x-y>h){h=x;q++;}
        else
        {
            if(x+y<vec[i+1].first){h=x+y;q++;}
            else h=x;
        }

    }cout<<q+2<<ses;
    return 0;
}
/**
5
1 2
2 1
5 10
10 9
20 1
*/



/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
