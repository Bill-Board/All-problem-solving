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
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 sum[mxi*2];
v99 bina(v99 *sum,v99 n,v99 val)
{
    v99 l=1,h=n,mid,pos=0;
    while(l<=h)
    {
        mid=(h-l)/2+l;
        if(sum[mid]==val)return mid;
        else if(sum[mid]<val)
        {
            l=mid+1;
            pos=mid;
        }
        else h=mid-1;
    }return pos+1;
}


int main()
{
    //test
    {
        v99 n,m;cin>>n>>m;
        v99 a[n+1],b[n+1];sum[0]=0;
        for(v99 i=1;i<=n;i++)
            {cin>>a[i];sum[i]=a[i]; sum[i]+=sum[i-1];}
        for(v99 i=0;i<m;i++)
        {
            v99 x;cin>>x;
            v99 pos=bina(sum,n,x);
            cout<<pos<<whp<<x-sum[pos-1]<<ses;
        }
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