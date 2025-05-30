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
    v99 n,pos=0,sum2=0,h=-1;cin>>n;
    vector<v99>rqq,a,cc;
    for(v99 i=0;i<n;i++){v99 x;cin>>x;a.push_back(x);}
    for(v99 j=0;j<a.size();j++)
    {
        vector<v99>ab;ab=a;
        pos=j;
        for(v99 i=pos;i<n-1;i++)
        {
            if(ab[i]<ab[i+1])ab[i+1]=ab[i];
        }
        for(v99 i=pos;i>0;i--)
        {
            if(ab[i]<ab[i-1])ab[i-1]=ab[i];
        }v99 sum=0;
        for(v99 k=0;k<n;k++)sum+=ab[k];
        if(sum2<sum){cc.clear();sum2=sum;cc=ab;}
        ab.clear();
       // cout<<sum<<ses;
    }
    for(v99 i=0;i<n;i++)
    {
        cout<<cc[i]<<whp;
    }cout<<ses;
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

