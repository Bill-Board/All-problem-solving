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
        v99 n;cin>>n;v99 a[n+1];
        if(n<6)
        {
            if(n==1)cout<<1<<ses<<1<<ses;
            else if(n==2)cout<<"1\n1"<<ses;
            else if(n==3)cout<<2<<ses<<"1 3"<<ses;
            else if(n==4)cout<<"4\n2 4 1 3"<<ses;
            else cout<<"5\n5 3 1 4 2"<<ses;
            return 0;
        }
        v99 i=n&1?n:n-1;cout<<n<<ses;
        while(i>0)
        {
            cout<<i<<whp;i-=2;
        }
        i=n&1?n-1:n;
        while(i)
        {
            cout<<i<<whp;i-=2;
        }cout<<ses;
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

