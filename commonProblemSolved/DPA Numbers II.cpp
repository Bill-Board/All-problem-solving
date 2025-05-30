//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ses   "\n"
#define whp   " "
#define mxi   9999999

typedef long long v99;
typedef unsigned long long ull;
using namespace std;
vector<ull>vec;
/*void sieve(v99 b)
{
     v99 c=sqrt(b);
     bool arrayy[c];
     arrayy[0]=true;
     arrayy[1]=true;
     for(v99 k=4;k<=c;k+=2)
     {
         arrayy[k]=true;
     }
     for(v99 d=3;d*d<=c;d+=2)
     {
         for(v99 e=d*d;e<=c;e+=d*2)
         {
             arrayy[e]=true;
         }
     }
     for(v99 i=1;i<=c;i++)
     {
         if(arrayy[i]==false)vec.push_back(i);
     }
}*/

bool flag=false,prime[mxi+1];
void SieveOfEratosthenes(ull n)
{
	memset(prime, true,  sizeof prime);

	for (ull p=2; p*p<=n; p++)
	{
		if (prime[p] == true)
		{

			/// Update all multiples of p
			for (ull i=p*2; i<=n; i += p)
				prime[i] = false;
		}
	}
	for(ull i=2;i<=n;i++)
    {
        if(prime[i]==true)vec.push_back(i);
    }
}

ull divisors(v99 n)
{
    ull ans=1;
    for(v99 i=0;i<vec.size();i++)
    {
        //cout<<"i "<<vec[i]<<ses;
        if(n%vec[i]==0)
        {
            flag=true;
            v99 cnt=1,sum=0,val=1;
            while(n%vec[i]==0)
            {
                n/=vec[i];
                cnt++;
            }
            for(v99 j=1;j<=cnt;j++)
            {
                sum+=val;
                val*=vec[i];
            }
            ans*=sum;
            //cout<<"n "<<n<<ses;
            //cout<<ans<<ses;
        }
        if(n<=1)break;
    }
    return ans;
}

int main()
{
    SieveOfEratosthenes(mxi+1);
    //for(v99 i=0;i<vec.size();i++)cout<<vec[i]<<whp;cout<<ses;
    IOS
    v99 t;cin>>t;
    while(t--){
    v99 n;cin>>n;//cout<<n<<ses;
    ull ans=divisors(n);//cout<<ans<<ses;
    ans=ans-n;
    if(!flag){cout<<"deficient"<<ses;continue;}
    //cout<<ans<<ses;
    if(ans==n)cout<<"perfect"<<ses;
    else if(ans>n)cout<<"abundant"<<ses;
    else cout<<"deficient"<<ses;
    flag=false;
    }
    return 0;
}


