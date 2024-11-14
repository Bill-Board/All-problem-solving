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


bool prime[mxi+1];
void SieveOfEratosthenes(v99 n)
{
	memset(prime, true,  sizeof(prime));

	for (v99 p=2; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			for (v99 i=p*2; i<=n; i += p)
				prime[i] = false;
		}
	}
}


v99 gcd(v99 a, v99 b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
 }
 v99 lcm(v99 a, v99 b)
 {
    return (a*b)/gcd(a, b);
 }

int main()
{
    //test
    //SieveOfEratosthenes(mxi);
    //while(1)
    {
        v99 n;cin>>n;
        if(n==1)return cout<<"1 1"<<ses,0;
        v99 sq=sqrt(n);
        if(sq*sq==n)--sq;
        for(v99 i=sq;i>0;i--)
        {
            if(n%i==0)
            {
                if(lcm(n/i,i)==n){return cout<<n/i<<whp<<i<<ses,0;}
            }
        }

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
