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
#define mxi 1000007
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

v99 mxlgth(string s,char c,v99 k,v99 n)
{
    v99 sa=0,sb=0,ans=0;
    for(v99 l=1,r=1;r<=n;r++)
    {
        if(s[r]==c)sa++;
        else
        {
            sb++;
            while(sb>k && l<=r)
            {
                if(s[l]==c)sa--;
                else sb--;
                l++;
            }
        }
        ans=max(ans,r-l+1);
    }
    return ans;
}

int main()
{
    //test
    //while(1)
    {
        v99 n,k;cin>>n>>k;
        string s;cin>>s;s='1'+s;
        v99 ans=0;
        ans=max(ans,mxlgth(s,'a',k,n));
        ans=max(ans,mxlgth(s,'b',k,n));
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
