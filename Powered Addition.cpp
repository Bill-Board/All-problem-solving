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

    v99 w=1;
    map<v99,v99>mpp;mpp[0]=0;mpp[1]=1;
        for(v99 i=2;i<62;i++){
                v99 x=w<<1;
                mpp[x]=i;
                w=x;
        }
    test
        //for(auto i:mpp)cout<<i.first<<whp<<i.second<<ses;
    {
        v99 n,h=0,hhh=0;cin>>n;v99 a[n+1],b[n+1];
        for(v99 i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0)h=a[i];
            else
            {
                hhh=max(hhh,h-a[i]);
                h=max(h,a[i]);
            }
        }
        v99 pos=0,sum=0;
        map<v99,v99>mpp2;
        while(!mpp[hhh] && hhh>0)
            {
                hhh-=(hhh& -hhh);
                //cout<<"a[i] "<<mpp[h]<<ses;
            }
        cout<<mpp[hhh]<<ses;
    }
    return 0;
}

/**
if(a[i]<=0)continue;
            //cout<<a[i]<<ses;
            cout<<"a[i] "<<a[i]<<ses;

            mpp2[a[i]]=mpp[a[i]];
            pos=max(pos,mpp[a[i]]);
             for(auto i:mpp2)cout<<i.first<<whp<<i.second<<ses;

if(a[i-1]<=a[i])continue;
            a[i]+=sum;
            if(a[i-1]<=a[i])continue;
            v99 dif=a[i-1]-a[i];
            if(mpp[dif]!=0)
            {
                pos=max(pos+1,mpp[dif]);
            }
            else
            {
                dif+=(dif & -dif);
                pos=max(pos+1,mpp[dif]);
                dif=mpp[]
                //cout<<"K "<<dif<<ses;
            }
            //cout<<pos<<ses;
            //cout<<dif<<ses;
            sum+=dif;
            a[i]+=dif;
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

