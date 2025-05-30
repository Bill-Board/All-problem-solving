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
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
map<v99,v99>rrrr,sze;
vector<pair<v99,v99> >a,b;
v99 root(v99 i)
{
    while(i!=rrrr[i]){i=rrrr[i];}
    return i;
}
void dsu(v99 x,v99 y)
{
    v99 xr=root(x),yr=root(y);
    if(xr==yr)
    {
        a.push_back(make_pair(x,y));
        return;
    }
    if(sze[xr]>sze[yr])
    {
        rrrr[yr]=rrrr[xr];
        sze[xr]+=sze[yr];
    }
    else
    {
        rrrr[xr]=rrrr[yr];
        sze[yr]+=sze[xr];
    }
}




int main()
{
    //test
    {
        v99 n;cin>>n;
        for(v99 i=1;i<=n;i++){rrrr[i]=i;sze[i]=1;}
        for(v99 i=0;i<n-1;i++)
        {
            v99 x,y;cin>>x>>y;
            dsu(x,y);
        }map<v99,v99>mpp;
        for(v99 i=1;i<=n;i++){
            mpp[root(i)]++;}
        if(mpp.size()==1)return cout<<0<<ses,0;
        v99 i=1;auto itt=mpp.begin();
        ++itt;
        for(auto it=mpp.begin();it!=mpp.end();++it)
        {
            //cout<<it->first<<ses;
            if(i==mpp.size())break;
            b.push_back(make_pair(it->first,itt->first));
            ++i;++itt;
        }
        cout<<a.size()<<ses;
        for(v99 i=0;i<a.size();i++)
        {
            cout<<a[i].first<<whp<<a[i].second<<whp;
            cout<<b[i].first<<whp<<b[i].second<<ses;
        }
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

