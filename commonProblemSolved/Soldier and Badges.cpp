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
    v99 n;cin>>n;
    v99 a[n];
    map<v99,v99>mpp;
    for(v99 i=0;i<n;i++)
    {
        cin>>a[i];
        mpp[a[i]]++;
    }
    sort(a,a+n);v99 ans=0;
    for(v99 i=0;i<n;i++)
    {
        if(mpp[a[i]]>1)
        {
            //cout<<"i "<<i<<whp<<a[i]<<ses;
            //cout<<"map "<<mpp[a[i]]<<ses;
            //cout<<"map "<<mpp[a[i]]<<ses;
            for(v99 j=a[i]+1;;j++)
            {
                ans++;
                if(mpp[j]==0)
                {
                    mpp[j]++;
                    break;
                }
            }
            mpp[a[i]]--;
        }
    }
    //for(auto it=mpp.begin();it!=mpp.end();++it)cout<<it->first<<whp<<it->second<<ses;
    cout<<ans<<ses;
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
