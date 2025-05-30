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
#define CLR(a,b) memset(a,b,sizeof(a))
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
vector<v99>ans;
pair<v99,v99>pt[501];
v99 p[mxi];
bool prime[510];
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
int main()
{
    //test
    //while(1)
    {
        memset(prime, true,  sizeof(prime));
        for (int p=2; p<=500; p++)
        {
            if (prime[p] == true)
            {
                ans.push_back(p);
                /// Update all multiples of p
                for (int i=p*p; i<=500; i += p)
                    prime[i] = false;
            }
        }
        CLR(pt,-1);CLR(p,0);
        v99 n;cin>>n;
        for(v99 i=0;i<n;i++)
        {
            v99 x;cin>>x;
            for(auto i:ans)
            {
                v99 c=0;
                while(x%i==0)
                {
                    c++;
                    x/=i;
                }
                if(c<pt[i].first|| pt[i].first==-1)
                {
                    pt[i].second=pt[i].first;
                    pt[i].first=c;
                }
                else if(c<pt[i].second || pt[i].second==-1)
                    pt[i].second=c;
            }
            p[x]++;
        }
        v99 ans=1;
        for(v99 i=2;i<=200000;i++)
        {
            if(i<=500)
            {
                if(pt[i].second!=-1)ans*=pw(i,pt[i].second);
            }
            else
            {
                if(p[i]>=n-1)ans*=i;
            }

        }cout<<ans<<ses;
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

