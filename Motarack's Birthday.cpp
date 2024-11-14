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
#define mxi 9999999999
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
    IOS
   v99 t,q=0;cin>>t;
   while(t--)
   {
        vector<v99>vec;v99 h=-1,l=mxi,n,pos=0,neg=0,sum=0;cin>>n;
        vec.push_back(0);
        for(v99 i=1;i<=n;i++)
        {
            v99 x;cin>>x;vec.push_back(x);
            if(x<0)neg++;
        }vec.push_back(0);
        if(neg==n){cout<<0<<whp<<1<<ses;continue;}
        for(v99 i=1;i<=n;i++)
        {
            if(vec[i]!=-1 &&(vec[i-1]==-1 || vec[i+1]==-1))
            {
                h=max(h,vec[i]);l=min(l,vec[i]);
            }
            //cout<<h<<whp<<l<<ses;
        }

        v99 dif=(l+h+1)/2;
        for(v99 i=0;i<vec.size();i++)
        {
            if(vec[i]==-1)vec[i]=dif;
            //cout<<vec[i]<<whp;
        }h=-1;//cout<<ses;
        for(v99 i=1;i<n;i++)
        {
            v99 s=abs(vec[i]-vec[i+1]);
            h=max(h,s);
            //cout<<s<<ses;
        }
        if(dif>1000000000)dif=0;
        cout<<h<<whp<<dif<<ses;
        vec.clear();
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
