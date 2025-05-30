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
    test
    {
        v99 n,x;cin>>n;v99 a[4*n];
        map<v99,v99>mpp;
        for(v99 i=0;i<4*n;i++)cin>>x,a[i]=x,mpp[x]++;
        sort(a,a+(4*n));
        v99 area;bool ok=true;
        for(v99 i=0,j=4*n-1;i<=j;)
        {
            if(mpp[a[i]]&1 || mpp[a[j]]&1){ok=false;break;}
            if(mpp[a[i]]==0){i++;continue;}
            if(mpp[a[i]]==0){j--;continue;}
            v99 p=a[i]*a[j];mpp[a[i]]-=2;mpp[a[j]]-=2;//cout<<p<<ses;
            if(i==0)area=p;
            if(p!=area){ok=false;break;}
            if(mpp[a[i+1]]&1 || mpp[a[j-1]]&1){ok=false;break;}
            i+=2;j-=2;
        }
        if(ok)cout<<"YES"<<ses;
        else cout<<"NO"<<ses;
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
