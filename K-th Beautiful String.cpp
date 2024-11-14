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
#define mxi 100001
#define mxii 2000059882
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
vector<v99> a;
int main()
{
    a.push_back(0);
    v99 q=1,j=2;
    for(v99 i=1;q<mxii;i++)
    {
        a.push_back(q);
        //cout<<q<<ses;
        q=j+q;++j;
    }a.push_back(q);//cout<<q<<ses;
    test
    {
        v99 n,k;cin>>n>>k;//v99 pos=-1;//cout<<a.size()<<ses;
        auto pos=lower_bound(a.begin(),a.end(),k)-a.begin();
        /*for(v99 i=1;i<a.size();i++)
        {
            if(k<=a[i]){pos=i;break;}
            //cout<<a[i]<<ses;
        }*/
        //cout<<pos<<ses;
        v99 position=n-pos-1;
        pos=n-(k-a[pos-1]);
        //cout<<position<<ses;
        //cout<<pos<<ses;
        for(v99 i=0;i<n;i++)
        {
            if(pos==i || position==i)cout<<"b";
            else cout<<"a";
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

