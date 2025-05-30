 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test long long t;cin >> t;while(t--)
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
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    v99 n;cin>>n;
    vector<v99>od,bi;od.push_back(0);bi.push_back(0);
    for(v99 i=0;i<n;i++)
    {
        v99 x;cin>>x;
        if(x%2)bi.push_back(x);
        else od.push_back(x);
    }v99 o =od.size(),b=bi.size();
    if(abs(o-b)<2)return cout<<0<<ses,0;
    sort(od.begin(),od.end());sort(bi.begin(),bi.end());
    for(v99 i=1;i<od.size();i++)od[i]+=od[i-1];
    for(v99 i=1;i<bi.size();i++)bi[i]+=bi[i-1];

    if(od.size()>bi.size())
    {
        v99 x=od.size()-bi.size()-1;
        cout<<od[x]<<ses;
    }
    else
    {
        v99 x=bi.size()-od.size()-1;
        cout<<bi[x]<<ses;
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

