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

map<string,string>rrrr;
string root(string s)
{
    while(s!=rrrr[s])
    {
        s=rrrr[s];
    }
    return s;
}


void dsu(string s, string d)
{
    rrrr[s]=d;
}

int main()
{
    //test
    {
        v99 n;cin>>n;
        map<string,v99>mpp;
        map<string,string>ki;
        vector<pair<string,string>>a;
        for(v99 i=0;i<n;i++)
        {
            string s,d;cin>>s>>d;
            rrrr[s]=s;rrrr[d]=d;
            a.push_back(make_pair(s,d));
            dsu(s,d);
        }
        for(v99 i=0;i<n;i++)
        {
            string www=root(a[i].first);
            if(mpp[www]==0)
            mpp[www]++,ki[a[i].first]=www;
        }
        cout<<ki.size()<<ses;
        for(auto i:ki)cout<<i.first<<whp<<i.second<<ses;
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
