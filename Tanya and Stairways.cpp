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
    v99 n,countt=1,sum=0,arr[9999];
    cin>>n;
    vector<v99>a;
    for(v99 i=0;i<n;i++)cin>>arr[i];
    for(v99 i=0;i<n-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            //cout<<"1  "<<arr[i]<<whp<<arr[i+1]<<ses;
            sum++;
            a.push_back(countt);
            countt=1;
        }
        else
        {
            //cout<<arr[i]<<whp<<arr[i+1]<<ses;
            countt++;
        }
    }
    if(countt!=1)
    {
            sum++;
            a.push_back(countt);
    }
    if(arr[n-1]==1)
    {
            sum++;
            a.push_back(1);
    }
    cout<<sum<<ses;
    for(v99 i=0;i<a.size();i++)cout<<a[i]<<whp;
    cout<<ses;
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

