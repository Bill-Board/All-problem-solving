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
    v99 n,ans=0;cin>>n;v99 f[]={0,9,189,2889,38889,488889,5888889,68888889,788888889,8888888889};
    //for(v99 i=1;i<9;i++)f[i]+=f[i-1];
    //for(v99 i=1;i<9;i++)cout<<f[i]<<whp;cout<<ses;
    string s=to_string(n);
    if(s.size()==10)ans=10;
    else if(s.size()==9)ans=(n-99999999)*9;
    else if(s.size()==8)ans=(n-9999999)*8;
    else if(s.size()==7)ans=(n-999999)*7;
    else if(s.size()==6)ans=(n-99999)*6;
    else if(s.size()==5)ans=(n-9999)*5;
    else if(s.size()==4)ans=(n-999)*4;
    else if(s.size()==3)ans=(n-99)*3;
    else if(s.size()==2)ans=(n-9)*2;
    else ans=(n-0)*1;
    cout<<ans+f[s.size()-1]<<ses;


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

