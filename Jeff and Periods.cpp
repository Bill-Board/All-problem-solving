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
#define mxi 100001
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    v99 n,h=-1,l=INT_MAX;cin>>n;
    vector<v99>a[mxi+1];
    map<v99,v99>mpp;
    for(v99 i=1;i<=n;i++)
    {
        v99 x;cin>>x;h=max(h,x);l=min(l,x);
        a[x].push_back(i);
        mpp[x]++;
    }
    /*
    for(v99 i=l;i<=h;i++)
    {
        cout<<a[i].size()<<ses;
        for(v99 j=0;j<a[i].size();j++)
            cout<<a[i][j]<<whp;
        cout<<ses;
    }*/
    vector<pair<int,int> >pi;

    for(auto it=mpp.begin();it!=mpp.end();++it)
    {
        bool flag=false;
        v99 i=it->first;
        if(a[i].size()==1){pi.push_back(make_pair(i,0));}
        else if(a[i].size()>1)
        {
            v99 dif=a[i][1]-a[i][0];
            for(v99 j=1;j<a[i].size();j++)
            {
                if(dif!=(a[i][j]-a[i][j-1])){flag=true;break;}
            }
            if(!flag) pi.push_back(make_pair(i,dif));
        }
    }
    cout<<pi.size()<<ses;
    for(v99 i=0;i<pi.size();i++)cout<<pi[i].first<<whp<<pi[i].second<<ses;
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

