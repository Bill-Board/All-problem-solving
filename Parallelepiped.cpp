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

int main()
{
    //test
    {
        v99 arr[4];cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        v99 a=arr[0],b=arr[1],c=arr[2];
        for(v99 i=1;i<=min(a,min(b,c));i++)
        {
            if(a%i==0)
            {
                v99 div1=a/i;//cout<<i<<whp<<div1<<ses;
                if(b%div1==0)
                {
                    v99 div2=b/div1;//cout<<i<<whp<<div2<<ses;
                    if(c%div2==0)
                    {
                        v99 div3=c/div2;//cout<<i<<whp<<div3<<ses;
                        if(div3==i){
                                //cout<<div1<<whp<<div2<<whp<<div3<<ses;
                                cout<<4*(div1+div2+div3)<<ses;return 0;
                        }
                    }
                }
            }
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

