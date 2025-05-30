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
    //IOS
    v99 t;cin>>t;
    while(t--)
    {
        v99 a,b,p;string s;cin>>a>>b>>p>>s;
        map<v99,v99>mpp;v99 sum=0,koitaa=0;
        char c=s[0];//mpp[1]=1;
        mpp[s.size()]=1;
        for(v99 i=0;i<s.size();i++)
            {
                if(s[i]=='A')koitaa++;
                if(c!=s[i])
                {
                    if(c=='A'){sum+=a;}
                    else {sum+=b;}
                    mpp[i+1]=1;c=s[i];
                }
            }
            if(s[s.size()-1]==s[s.size()-2])
            {
                if(c=='A'){sum+=a;}
                    else {sum+=b;}
            }
        if(koitaa==s.size() || koitaa==0)
        {
            if(s[0]=='B')swap(a,b);
            if(a<=p)cout<<1<<ses;
            else cout<<s.size()<<ses;
            //continue;
        }
        else if(sum<=p){cout<<1<<ses;}//continue;}
        else
        {
            if(s[0]=='B')swap(a,b);
            for(auto it=mpp.begin();it!=mpp.end();++it)
            {
                v99 x=it->first;
                sum-=a;
                if(sum<=p){cout<<x<<ses;break;}
                swap(a,b);
            }
        }
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
