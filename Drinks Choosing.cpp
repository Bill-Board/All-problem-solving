 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
v99 visi[mxi];
int main()
{

    //freopen("data.out","w",stdout);
    //test
    //while(1)
    {
        v99 n,k;cin>>n>>k;v99 lp=(n+1)/2;
        map<v99,v99>mpp,mpp1;
        rep0(i,0,n)
        {
            v99 x;cin>>x;mpp[x]++;
        }v99 ans=0;
        for(auto i:mpp)
        {
            v99 d=i.second/2;
            ans+=(2*d);
            lp-=d;
        }cout<<ans+lp<<ses;

    }
    return 0;
}




/**
v99 ans=0,sum=0;
        for(auto i:mpp)visi[i.second]++;bool ok=false;
        for(v99 i=2;i<=k;i+=2)
        {
            if(visi[i]==0)continue;
            v99 d=i/2;
            for(v99 j=1;j<=visi[i];j++)
            {
                sum+=d;ans++;
                if(sum>lp)
                {
                    ok=true;
                    break;
                }
            }
            if(ok)break;
        }
        if(ok)return cout<<ans<<ses,0;
        for(v99 i=1;i<=k;i+=2)
        {
            if(visi[i]==0)continue;
            v99 d=(i+1)/2;
            for(v99 j=1;j<=visi[i];j++)
            {
                sum+=d;
                if(sum>lp)
                {
                    ok=true;
                    break;
                }ans++;
            }
            if(ok)break;
        }
        cout<<ans<<ses;
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

