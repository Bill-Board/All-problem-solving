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

bool prime(int n)
{
    if(n==1)return false;
    if(n==2 || n==3)return true;
    if(n%2==0)return false;
    else if(n%3==0)return false;
    else
    {
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0)return false;
            else if(n%(i+2)==0) return false;
            else if(n%(i+4)==0)return false;
        }
        return true;
    }
}

 int main(){
   v99 n,m,q=0;cin>>n>>m;
   bool r=prime(m);if(!r)return cout<<"NO"<<ses,0;
   for(int i=m-1;i>n;i--){
        bool flag=prime(i);
   if(flag){q++;}
   }
   if(q==0)cout<<"YES"<<ses;
   else cout<<"NO"<<ses;
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
