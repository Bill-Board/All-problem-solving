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
v99 ans=0;


int main()
{
    test
    {
         string s;
         v99 n,k,f,ans=0;cin>>n>>k>>s;
         s="&"+s;f=n/k;f*=2;
         //cout<<s<<whp<<f<<ses;
         for(v99 i=1;i<=k/2;i++)
         {
             map<char,v99>mpp;
             v99 h=0;
             for(v99 j=i;j<s.size();j+=k)
                 mpp[s[j]]++;
             for(v99 j=k-i+1;j<s.size();j+=k)
                 mpp[s[j]]++;
            //for(auto j:mpp)cout<<j.first<<whp<<j.second<<ses;
            for(auto j:mpp)h=max(h,j.second);
            ans+=(f-h);
         }
         if(k&1)
         {
             map<char,v99>mpp;v99 h=0;
             for(v99 i=k/2+1;i<s.size();i+=k)mpp[s[i]]++;
             for(auto j:mpp)h=max(h,j.second);
             ans+=((n/k)-h);
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
