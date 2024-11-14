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
bool prime[101];
void SieveOfEratosthenes(int n)
{
	memset(prime, true,  sizeof(prime));
	for (int p=2; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			/// Update all multiples of p
			for (int i=p*2; i<=n; i += p)
				prime[i] = false;
		}
	}
}


int main()
{
    //test
    //while(1)
    {
        v99 n;cin>>n;SieveOfEratosthenes(101LL);
        v99 sum=0,ans=0,a[n+1];
        for(v99 i=0;i<n;i++){cin>>a[i];sum+=a[i];}
        sort(a,a+n);v99 val=0,ki=LLONG_MAX;
        map<v99,v99>mpp;ans=LLONG_MAX;
        for(v99 i=n-1;i>=0;i--)
        {
            if(!prime[a[i]]){mpp[a[i]]++;}
        }//cout<<val<<ses;
        if(mpp.empty())return cout<<sum<<ses,0;
        for(auto j:mpp)
        {
            //cout<<j.first<<ses;
            val=j.first;v99 sum1=LLONG_MAX;
            for(v99 i=1;i*i<=val;i++)
            {
                if(val%i==0)
                {
                    v99 ek=val/i;
                    v99 dui=a[0]*i;
                    ans=ek+dui;
                    sum1=min(sum1,sum-a[0]-val+ans);
                    ek=val/(val/i);
                    dui=a[0]*(val/i);
                    ans=ek+dui;
                    sum1=min(sum1,sum-a[0]-val+ans);
                }
            }
            ki=min(ki,sum1);

        }
        cout<<min(ki,sum)<<ses;
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

