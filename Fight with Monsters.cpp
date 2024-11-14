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
    v99 n,a,b,k,q=0;cin>>n>>a>>b>>k;
    v99 arr[n+1];
    vector<v99>vec;
    for(v99 i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]=(arr[i]%(a+b))==0?a+b:arr[i]%(a+b);
        if(arr[i]>a)vec.push_back(arr[i]);
    }
    //for(v99 i=0;i<n;i++)cout<<arr[i]<<whp;cout<<ses;
    sort(arr,arr+n);
    //for(v99 i=0;i<n;i++)cout<<arr[i]<<whp;cout<<ses;
    sort(vec.begin(),vec.end());
    //for(v99 i=0;i<vec.size();i++)cout<<vec[i]<<whp;cout<<ses;
    if(vec.size()==0)return cout<<n<<ses,0;
    for(v99 i=0;i<vec.size() && k!=0;i++)
    {
        //cout<<"i  "<<i<<ses;
        v99 x=vec[i]-a;
        x=x%a==0?x/a:x/a+1;
        //cout<<"x  "<<x<<ses;
        if(k<x)continue;q++;
        k-=x;
        //cout<<"k "<<k<<ses;
        if(k==0 || i==(n-1)){cout<<n-vec.size()+q<<ses;return 0;}
    }
    cout<<n-vec.size()+q<<ses;
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
