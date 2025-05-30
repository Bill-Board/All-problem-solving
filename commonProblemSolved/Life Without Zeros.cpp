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
    v99 a,b,f;cin>>a>>b;f=a+b;
    string p="",q="",r="",x=to_string(a),y=to_string(b),z=to_string(f);
    for(v99 i=0;i<x.size();i++)
    {
        if(x[i]!='0')p+=x[i];
    }
    for(v99 i=0;i<y.size();i++)
    {
        if(y[i]!='0')q+=y[i];
    }
    for(v99 i=0;i<z.size();i++)
    {
        if(z[i]!='0')r+=z[i];
    }
    v99 c=stoi(p),d=stoi(q),e=stoi(r);
    //cout<<c<<whp<<d<<whp<<e<<ses;
    if(c+d==e)cout<<"YES"<<ses;
    else cout<<"NO"<<ses;
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
