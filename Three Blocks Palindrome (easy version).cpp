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
    test
    //while(1)
    {
        v99 n;cin>>n;v99 a[n+1];
        map<v99,v99>mpp;
        for(v99 i=0;i<n;i++)
        {
            cin>>a[i];mpp[a[i]]++;
        }
        v99 ans=0;
        if(mpp.size()==n){cout<<1<<ses;continue;}
        for(auto i:mpp)
        {
            v99 x=i.first,y=i.second;
            //cout<<x<<whp<<y<<ses;
            if(y==1)continue;
            v99 j=0;v99 k=n-1,loop=y/2;
            for(v99 lp=1;lp<=loop;lp++)
            {
                bool ok=false,ok2=false;
                while(j<n && a[j]!=x)
                {
                    ok=true;
                    j++;
                }
                while(k>=0 && a[k]!=x)
                {
                    ok2=true;
                    k--;
                }
                //cout<<j<<whp<<k<<ses;
                //cout<<ok<<whp<<ok2<<ses;
                //cout<<j<<whp<<k<<ses;
                map<v99,v99>mpp2;v99 h=0;
                for(v99 q=j+1;q<k;q++)
                {
                    //if(a[q]==x)continue;
                    mpp2[a[q]]++;
                }
               // for(auto q:mpp)
                for(auto q:mpp2)h=max(h,q.second);//cout<<h<<ses;
                //cout<<"loop "<<loop<<ses;
               ans=max(ans,h+(lp*2)) ;//cout<<ans<<ses;
               //if(!ok)
                j++;
                //if(!ok2)
                k--;
            }//cout<<ses<<ses;
        }
        cout<<ans<<ses;
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
