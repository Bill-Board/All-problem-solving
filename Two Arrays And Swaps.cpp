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
#define mxi 200003
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
# define INF 0x3f3f3f3f
#define CLR(a) memset(a,0,sizeof a)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 visi[2000];
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
int main()
{
    test
    //while(1)
    {
        v99 n,k;cin>>n>>k;
        v99 dif=n-k;
        vector<pair<v99,v99> >a;
        for(v99 i=0;i<n;i++)
        {
            v99 x;cin>>x;
            a.push_back(make_pair(x,1));
        }
        for(v99 i=0;i<n;i++)
        {
            v99 x;cin>>x;
            a.push_back(make_pair(x,2));
        }
        sort(a.begin(),a.end());v99 ans=0;
        reverse(a.begin(),a.end());

        CLR(visi);
        for(v99 i=0;i<a.size() && dif;i++)
        {
            if(a[i].second==1){ans+=a[i].first;visi[i]=1;--dif;}
        }
        for(v99 i=0;i<a.size() && k;i++)
        {
            if(!visi[i]){--k;ans+=a[i].first;}
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
