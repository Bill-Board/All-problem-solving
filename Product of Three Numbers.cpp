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
    v99 t;cin>>t;
    while(t--)
    {
        v99 n;cin>>n;
        vector<v99>arr;
        v99 a=0,b=0,q=0,root=sqrt(n);
        //cout<<root<<ses;
        for(v99 i=2;i<=root;i++)
        {
            if(n%i==0){
                    arr.push_back(i);
                    arr.push_back(n/i);
            }
        }sort(arr.begin(),arr.end());
        //for(v99 i=0;i<arr.size();i++)cout<<arr[i]<<whp;cout<<ses;
        if(arr.size()<3)cout<<"NO"<<ses;
        else
        {
            bool flag=false;
            for(v99 i=0;i<arr.size();i++)
            {
                for(v99 j=i+1;j<arr.size();j++)
                {
                    for(v99 k=j+1;k<arr.size();k++)
                    {
                        if(arr[i]==arr[j] || arr[i]==arr[k] || arr[j]==arr[k] )continue;
                        if(arr[i]*arr[j]*arr[k]==n)
                        {
                            cout<<"YES\n"<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<ses;
                            flag=true;break;
                        }
                    }
                    if(flag)break;
                }
                if(flag)break;
            }
            if(!flag)cout<<"NO"<<ses;
        }
        arr.clear();
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
