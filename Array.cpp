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
        v99 n;cin>>n;
        vector<v99>a,b,c;
        bool ok=false,ok2=false;
        for(v99 i=0;i<n;i++)
        {
            v99 x;cin>>x;
            if(x<0&&!ok){a.push_back(x);ok=true;}
            else if(x>0&&!ok2){b.push_back(x);ok2=true;}
            else c.push_back(x);
        }
        sort(c.begin(),c.end());
        if(b.size()==0)
        {
            for(v99 i=0;i<2;i++)
                b.push_back(c[i]);
            c.erase(c.begin());
            c.erase(c.begin());
        }
        cout<<a.size()<<whp;for(auto i:a)cout<<i<<whp;cout<<ses;
        cout<<b.size()<<whp;for(auto i:b)cout<<i<<whp;cout<<ses;
        cout<<c.size()<<whp;for(auto i:c)cout<<i<<whp;cout<<ses;
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
