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
#define mxi 10005
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 0x3f3f3f3f
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int>> pq;
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
    test
    //while(1)
    {
        v99 n,h=0;cin>>n;
        vector<v99>a[mxi];
        for(v99 i=1;i<=n;i++)
        {
            v99 x;cin>>x;h=max(h,x);
            a[x].push_back(i);
        }v99 ans=0,pos=0;
        for(v99 i=1;i<=h;i++)
        {
            v99 q=1;
            for(v99 j=1;j<a[i].size();j++)
            {
                if(a[i][j]==a[i][j-1]+1){
                    a[i][j]--;continue;
                }
                q++;
            }
            if(a[i].size()==0)continue;
            if(a[i].size()==1 && ans<q){ans=q;pos=i;}
            else if(a[i].size()!=0 && ans<q){ans=q;pos=i;}
            //cout<<q<<ses;
        }
        cout<<pos<<ses;
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
