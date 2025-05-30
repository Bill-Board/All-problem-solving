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

map<pair<v99,v99>,pair<v99,v99>>rrrr;
map<pair<v99,v99>,v99>sizee;


pair<v99,v99>root(pair<v99,v99>i)
{
    while(i!=rrrr[i])
    {
        i=rrrr[rrrr[i]];
        //cout<<i.first<<whp<<i.second<<ses;
    }
    return i;
}

void dsu(pair<v99,v99>a,pair<v99,v99>b)
{
    pair<v99,v99>roota=root(a),rootb=root(b);
    if(roota==rootb)return;
    if(sizee[roota]>sizee[rootb])
    {
        rrrr[rootb]=rrrr[roota];
        sizee[roota]+=sizee[rootb];
    }
    else
    {
        rrrr[roota]=rrrr[rootb];
        sizee[rootb]+=sizee[roota];
    }
}


int main()
{
    v99 n;cin>>n;
    vector<pair<v99,v99>>v;
    for(v99 i=0;i<n;i++)
    {
        v99 x,y;cin>>x>>y;
        rrrr[{x,y}]={x,y};
        v.push_back(make_pair(x,y));
    }
    for(v99 i=0;i<n;i++)
    {
        v99 x=v[i].first,y=v[i].second;
        for(v99 j=i+1;j<n;j++)
        {
            if(x==v[j].first || y==v[j].second)dsu({x,y},{v[j].first,v[j].second});
        }
    }
    map<pair<v99,v99>,v99>mpp;
    for(v99 i=0;i<n;i++)
    {
        pair<v99,v99>pi=root(v[i]);
        mpp[pi]++;
    }
    cout<<mpp.size()-1<<ses;

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
