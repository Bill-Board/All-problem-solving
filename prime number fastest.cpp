#include<bits/stdc++.h>
using namespace std;
typedef long long v99;

bool prime(v99 n)
{
    if(n==1)return false;
    if(n==2 || n==3)return true;
    if(n%2==0)return false;
    else if(n%3==0)return false;
    else
    {
        for(v99 i=5;i*i<=n;i=i+6)
        {
            if(n%i==0)return false;
            else if(n%(i+2)==0) return false;
            else if(n%(i+4)==0)return false;
        }
        return true;
    }
}

 int main(){
   int num=1000000000 ;//cin>>num;
   while(num++){
   //cout << "The prime numbers smaller or equal to "<< num <<" are: ";
   for(int i=num;;i++){
        bool flag=prime(i);
   if(flag)cout<<i<<endl;
   }
   }
   return 0;
}

/**
bool prime[mxi+1];
void SieveOfEratosthenes(int n)
{
	memset(prime, true,  sizeof(prime));
	for(v99 i=4;i<=n;i+=2)prime[i]=false;
	for (int p=3; p<=n; p++)
	{
		if (prime[p] == true)
		{
			/// Update all multiples of p
			for (int i=p*p; i<=n; i += 2*p)
				prime[i] = false;
		}
	}
}*/
