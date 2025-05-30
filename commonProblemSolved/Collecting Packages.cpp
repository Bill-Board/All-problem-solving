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
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    v99 t;cin>>t;
    while(t--)
    {
        v99 x,y,n;
        vector<pair<v99,v99> >vec;
        cin>>n;
        for(v99 i=0;i<n;i++)
        {
            cin>>x>>y;
            vec.push_back({x,y});
        }
        sort(vec.begin(),vec.end());
      //  for(v99 i=0;i<n;i++)
        //    cout<<vec[i].first<<whp<<vec[i].second<<ses;
        v99 cox=0,coy=0;bool flag=false;string s;
        for(v99 i=0;i<n;i++)
        {
            if(vec[i].first>=cox && vec[i].second>=coy)
            {
                for(v99 j=cox;j<vec[i].first;j++)s.push_back('R');
                cox=vec[i].first;
                for(v99 j=coy;j<vec[i].second;j++)s.push_back('U');
                coy=vec[i].second;
            }
            else{flag=true;break;}
        }
        if(flag)cout<<"NO"<<ses;
        else cout<<"YES\n"<<s<<ses;
        s.clear();
    }
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
