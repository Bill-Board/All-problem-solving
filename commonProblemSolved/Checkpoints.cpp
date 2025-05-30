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
    v99 n,a,sum=0;cin>>n>>a;
    vector<v99>vec;
    for(v99 i=0;i<n;i++)
    {
        v99 x;cin>>x;sum+=x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    if(n<=2)
    {
        if(n==1)cout<<0<<ses;
        else
        {
            v99 u=abs(a-vec[0]),v=abs(a-vec[1]);
            cout<<min(u,v)<<ses;
        }
        return 0;
    }
    if(a<=vec[0]){cout<<abs(vec[n-2]-a)<<ses;return 0;}
    if(a>=vec[n-1]){cout<<abs(a-vec[1])<<ses;return 0;}

    v99 ans=INT_MAX;
    ans=min(ans,vec[n-2]-vec[0]+min(abs(a-vec[0]),abs(vec[n-2]-a)));
    ans=min(ans,vec[n-1]-vec[1]+min(abs(a-vec[1]),abs(vec[n-1]-a)));
    cout<<ans<<ses;
    /*v99 l=a-vec[0],h=vec[n-1]-a;//cout<<l<<whp<<h<<ses;
    if(l>h)
    {
        h=2*h+abs(a-vec[1]);
        if(a<=vec[1] || a>=vec[n-2])h=min(l,h);
        cout<<h<<ses;
    }
    else if(h>l)
    {

        l=2*l+abs(vec[n-2]-a);//cout<<l<<whp<<h<<ses;
        if(a<=vec[1]|| a>=vec[n-2])l=min(l,h);
        cout<<l<<ses;
    }
    else
    {
        v99 nl=l-vec[0],nh=h-vec[n-2];
        if(a<=vec[1] || a>=vec[n-2]){cout<<h<<ses;return 0;}
        nl=min(nl,nh);
        cout<<2*l+nl<<"  yc"<<ses;
    }*/
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
