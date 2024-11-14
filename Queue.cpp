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

    v99 n,q=1;cin>>n;
    v99 a[n+1],b[n+1];a[0]=0;b[0]=0;
    for(v99 i=1;i<=n;i++)
        cin>>a[i];
    sort(a,a+n+1);
    for(v99 i=1;i<=n;i++)
    {
        b[i]=a[i];
        b[i]+=b[i-1];
    }
    v99 sum=a[1];
    for(v99 i=2;i<=n;i++)
    {
        if(a[i]<sum)
        {
            while(i<=n)
            {
                i++;if(i>n)break;
                if(a[i]>=sum){q++;sum+=a[i];break;}
            }
        }
        else {q++;sum+=a[i];}

    }
    cout<<q<<ses;
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
