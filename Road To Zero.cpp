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
        v99 x,y,a,b,ans=0;cin>>x>>y>>a>>b;
        if((x<0&&y<0)||(x>0&&y>0))
        {
            x=abs(x);y=abs(y);
            if(a>=b)
            {
                v99 dif=abs(min(x,y));
                ans+=dif*b;
                x-=dif;y-=dif;
                ans+=(x*a);ans+=(y*a);
            }
            else
            {
                if(a*2<=b)
                {
                    ans+=((x+y)*a);
                }
                else
                {
                    v99 dif=abs(min(x,y));
                    ans+=dif*b;
                    x-=dif;y-=dif;
                    ans+=(x*a);ans+=(y*a);
                }
            }
        }
        else
        {
            ans+=(abs(x)+abs(y))*a;
        }
        cout<<ans<<ses;
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
