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
    string s1,s2;cin>>s1>>s2;
    v99 s1p=0,s2p=0,s1m=0,q=0,s2m=0;
    double x=0;
    for(v99 i=0;i<s1.size();i++)
    {
        if(s1[i]=='+')s1p++;
        else if(s1[i]=='-')s1m++;
        if(s2[i]=='+')s2p++;
        else if(s2[i]=='-')s2m++;
        else if(s2[i]=='?')q++;
    }
    if(s1p==s2p && s1m==s2m){x=1;cout<<fixed<<setprecision(12)<<x<<ses;}
    else if(s2p>s1p || s2m>s1m){x=0;cout<<fixed<<setprecision(12)<<x<<ses;}
    else
    {
        v99 facto[]={1,1,2,6,24,120,720,5040,40320,362880,3628800};
        v99 jaiga=1<<q;
        v99 dfp=s1p-s2p;
        v99 dfn=s1m-s2m;
        //cout<<dfp<<whp<<dfn<<whp<<q<<ses<<jaiga<<ses;
        if(dfp<0 || dfn<0){cout<<fixed<<setprecision(12)<<0<<ses;return 0;}
        //cout<<facto[q]<<whp<<facto[dfp]<<whp<<facto[dfn]<<ses;
        double x1=(( facto[q] / (facto[dfp] * facto[dfn]))/(double)jaiga);
        cout<<fixed<<setprecision(12)<<x1<<ses;
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
