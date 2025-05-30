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

int main()
{
    //test
    {
        v99 n;cin>>n;
        v99 visi[n*n+2];memset(visi,0,sizeof visi);
        vector<pair<v99,v99> >a;
        for(v99 i=0;i<n*n;i++)
        {
            v99 x,y;cin>>x>>y;
            a.push_back(make_pair(x,y));
        }
        //sort(a.begin(),a.end());
        v99 ans=0;
        for(v99 i=0;i<n*n;i++)
        {
            if(visi[i])continue;
            for(v99 j=i+1;j<n*n;j++)
            {
                if((a[i].first==a[j].first || a[i].second==a[j].second))
                {visi[j]++;}
            }
        }
        for(v99 i=0;i<n*n;i++)
        {
            //cout<<visi[i]<<whp;
            if(!visi[i])cout<<i+1<<whp;
        }
        cout<<ses;
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

