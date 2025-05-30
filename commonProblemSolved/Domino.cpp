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
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    //test
    //while(1)
    {
        v99 n,sum1=0,sum2=0;cin>>n;
        vector<pair<v99,v99>>a;vector<v99>b;
        for(v99 i=0;i<n;i++)
        {
            v99 x,y;cin>>x>>y;
            sum1+=x;sum2+=y;
            if((x%2==0&&y%2!=0)|| (x%2!=0 && y%2==0))a.push_back(make_pair(x,y));
        }
        if(sum1%2==0 && sum2%2==0)return cout<<0<<ses,0;
        for(v99 i=0;i<a.size();i++)
        {
            v99 x=a[i].first,y=a[i].second;
            sum1-=x;sum1+=y;
            sum2-=y;sum2+=x;
            if(sum1%2==0 && sum2%2==0)return cout<<i+1<<ses,0;
        }
        cout<<-1<<ses;
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

