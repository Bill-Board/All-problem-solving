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
#define mxi 1000003
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
        v99 n,k1,k2,ppp;cin>>n>>k1;
        queue<v99>a,b;
        while(k1--)cin>>ppp,a.push(ppp);
        cin>>k2;while(k2--)cin>>ppp,b.push(ppp);ppp=0;
        while(!a.empty() && !b.empty())
        {
            ppp++;
            v99 atop=a.front(),btop=b.front();//cout<<atop<<whp<<btop<<ses;
            a.pop();b.pop();
            if(atop>btop)
            {
                a.push(btop);
                a.push(atop);
            }
            else
            {
                b.push(atop);
                b.push(btop);
            }
            //cout<<a.size()<<whp<<b.size()<<ses;
            if(ppp>mxi)return cout<<-1<<ses,0;
        }cout<<ppp<<whp;
        if(a.size()==0)cout<<2<<ses;
        else cout<<1<<ses;
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
