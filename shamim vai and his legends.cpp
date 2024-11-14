//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
#define mx 9999999
//set <int, greater <int> > ::iterator it;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
vector<bool>b;
/*bool prime(ll n)
{
    if(n==1)return false;
    if(n==2 || n==3)return true;
    if(n%2==0)return false;
    else if(n%3==0)return false;
    else
    {
        for(ll i=5;i*i<=n;i=i+6)
        {
            if(n%i==0)return false;
            else if(n%(i+2)==0) return false;
            else if(n%(i+4)==0)return false;
        }
        return true;
    }
}

int main()
{
    ll n;
    for(ll i=1;i<=mx;i++){
        bool flag=prime(i);
        b[i]=flag;
        //cout<<b[i]<<ses;
    }
     //for(ll i=1;i<=mx;i++)
       // cout<<b[i]<<whp;
    //cout<<ses;
    while(cin>>n){
    if(n==0)return 0;
    ll a;
    ull sum=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>a;
        if(a==10000000)continue;
        if(b[a-1]==1)sum+=a;
    }
    cout<<sum<<ses;
    }
}
/*while(cin>>n){
    if(n==0)return 0;
    ll a[n];
    ull sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        bool flag=prime(a[i]);
        if(flag)sum+=a[i];
    }
    cout<<sum<<ses;
    }*/

#include <bits/stdc++.h>
using namespace std;
#define mxi 9999999
bool prime[mxi+1];
void SieveOfEratosthenes(int n)
{
	memset(prime, true, sizeof(prime));

	for (int p=2; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			for (int i=p*2; i<=n; i += p)
				prime[i] = false;
		}
	}
}
int main()
{
	int n;
	SieveOfEratosthenes(n);
	while(cin>>n)
    {
        if(n==0)return 0;
        ull sum=0;
        for(int i=1;i<=n;i++)
        {
            int a;cin>>a;
            if(prime[a])sum+=a;
        }
        cout<<sum<<ses;
    }
	return 0;
}
