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

int main()
{
    //test
    //while(1)
    {
        v99 n,m,k;cin>>n>>m;
        if(m==0) {int v=(n==1)?0:-1; cout<<v<<" "<<v<<endl; return 0; }
        if(m>n*9) { cout<<-1<<" "<<-1<<endl; return 0; }
        v99 a[n+1];k=m;k--;//a[1]=1;
        for(v99 i=n;i>0;i--)
        {
            a[i]=min((v99)9,k);
            k-=a[i];
            //cout<<k<<ses;
        }
        a[1]++;
        for(v99 i=1;i<=n;i++)cout<<a[i];cout<<whp;
        for(v99 i=1;i<=n;i++)
        {
            a[i]=min((v99)9,m);
            m-=a[i];
        }
        for(v99 i=1;i<=n;i++)cout<<a[i];cout<<ses;
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
