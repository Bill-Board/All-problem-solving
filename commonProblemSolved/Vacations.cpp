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
    v99 n,ans=0;cin>>n;
    v99 a[n];
    bool cont=false,gym=false;
    for(v99 i=0;i<n;i++)cin>>a[i];
    for(v99 i=0;i<n;i++)
    {
        //cout<<a[i]<<ses;
        if(a[i]==0){ans++;cont=false;gym=false;}
        else if(a[i]==1){
                if(cont){ans++;cont=false;}
                else {cont=true;}gym=false;
        }
        else if(a[i]==2){
                if(gym){ans++;gym=false;}
                else {gym=true;}cont=false;
        }
        else if(a[i]==3 && !gym && !cont)continue;
        else{
            if(!gym){gym=true;cont=false;}
            else{cont=true;gym=false;}
        }
        //cout<<ans<<whp;
    }
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
