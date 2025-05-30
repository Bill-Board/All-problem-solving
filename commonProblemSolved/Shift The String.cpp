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

char ss[mxi];
int lps[mxi];
void table(string p)
{
    lps[0]=0;
    int i=1,len=0,n=p.size();
    while(i<n)
    {

        if(p[i]==p[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)len=lps[len-1];
            else {lps[i]=0;i++;}
        }
    }
}
int kmp(string t,string p)
{
    table(p);//cout<<t<<whp<<p<<ses;
    int ans=0,pos=0,n=t.size(),m=p.size(),i=0,j=0;//cout<<p<<ses;
    while(i<n)
    {
        if(t[i]==p[j])
        {
            i++;j++;
            if(ans<j)
            {
                ans=j;pos=i;
            }
        }
        if(j==m){return i-m;}
        if(i<n && p[j]!=t[i])
        {
            if(j!=0)j=lps[j-1];
            else i++;
        }
    }
    //cout<<pos-ans<<ses<<ans<<ses;
    return pos-ans;
}
int main()
{
    //int tt;cin>>tt;
    //for(v99 k=1;k<=tt;k++)
    {
        string s,p;v99 n;
        cin>>n>>s>>p;p+=p;
        v99 ans=kmp(p,s);cout<<ans<<ses;
        //ans+=s.size();
        //cout<<"Case "<<s<<": "<<ans<<ses;
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


