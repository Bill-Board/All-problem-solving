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

/*
6
4 4 2 3 2 1
6
1 2 3 2 1 0
*/
int main()
{
    IOS
    v99 t,b=1;cin>>t;
    while(t--)
    {
        //cout<<"b "<<b++<<ses;
        v99 n,k=0;cin>>n;
        v99 q=0,p=0,a[n+1];
        for(v99 i=1;i<=n;i++)cin>>a[i];
        //if(a[1]==0 || (a[1]==1 && a[2]==1))q=0;
        for(v99 i=1;i<=n;i++)
        {
            if(a[i]>=q){q++;}
            else
            {
                p=i;
                break;
            }
        }
        if(p==0){cout<<"Yes"<<ses;continue;}
        bool flag=false;
        for(v99 i=p-1;i<=n;i++)
        {
            if(a[i]<n-i)
            {
                flag=true;
                break;
            }
        }//cout<<k<<ses;
        if(!flag)
        {
            cout<<"Yes"<<ses;
        }
        else
            cout<<"No"<<ses;
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
