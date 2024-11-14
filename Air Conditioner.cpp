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
    IOS
    v99 t1;cin>>t1;
    while(t1--)
    {
        v99 n,m,k,age=0,mnn,mxx;cin>>n>>m;mnn=m,mxx=m;k=0;
    bool hoinai=false;
    while(n--)
    {
        v99 t,l,h;cin>>t>>l>>h;
        if(hoinai)continue;
        v99 f=t-age;age=t;
        //cout<<f<<ses;
        v99 x=mnn-f,y=mxx+f;//cout<<"x "<<x<<" y "<<y<<ses;
        if(y<l || x>h) hoinai=true;
        //if(k==0){mnn=l;mxx=h;k=1;cout<<"mnn "<<mnn<<" mxx "<<mxx<<ses;continue;}
        mnn=max(l,x);mxx=min(h,y);

        //cout<<"mnn "<<mnn<<" mxx "<<mxx<<ses;
        /*if((x<=l && l<=y))mnn=l;
        else if(x>l)mnn=x;
        //else if(l<y)mnn=y;
        if(x<=h && h<=y)mxx=h;
        else if(h>y)*/
    }if(hoinai)cout<<"NO"<<ses;
    else cout<<"YES"<<ses;
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
