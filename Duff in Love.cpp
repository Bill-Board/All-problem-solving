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
#define mxi 1000009
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
vector<v99>prime;
bool pri[mxi+1];
void SieveOfEratosthenes(int n)
{
	memset(pri, true,  sizeof(pri));

	for (int p=2; p*p<=n; p++)
	{
		if (pri[p] == true)
		{
			/// Update all multiples of p
			for (int i=p*2; i<=n; i += p)
				pri[i] = false;
		}
	}
	for(v99 i=2;i<=n;i++){if(pri[i])prime.push_back(i);}
}



int main()
{
    //test
    //while(1)
    {
        v99 n,ans=1;cin>>n;
        SieveOfEratosthenes(sqrt(n));
        for(auto i:prime)
        {
            if(n%i==0)
            {
                while(n%i==0)n/=i;
                ans*=i;
            }
        }
        ans*=n;
        cout<<ans<<ses;
        /*map<v99,v99>mpp,mpp1;
        for(v99 i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                mpp[i]++;
                mpp[n/i]++;
            }
        }
        for(auto it=mpp.rbegin();it!=mpp.rend();++it)
            cout<<it->first<<ses;
        //for(auto i:prime)cout<<i<<ses;
        for(auto it=mpp.rbegin();it!=mpp.rend();++it)
            {
                v99 x=it->first,q=0,ans=0;
                for(auto i:prime)
                {
                    v99 k=0;
                    if(x%i==0)
                    {
                        q++;
                        while(x%i==0)x/=i,ans++,k++;
                    }
                    if(k>1)break;
                    if(x==1)break;
                }
                if(q==ans)return cout<<it->first<<ses,0;
            }*/

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
