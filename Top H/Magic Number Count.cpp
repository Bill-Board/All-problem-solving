#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout<<":["<<x<<"XE]"<<endl;
#define debug2(x,y) cout<<":["<<x<<" "<<y<<"XE]"<<endl;
#define _ ios_base::sync_with_stdio(false);
#define mod 1000000007

///PROBLEM: E
const ll N=100000000;
vector<ll>prime;
ll mark[(N/31) + 1000];

void sieve(int n)///FINDING PRIME
{
    ll limit=sqrt(n*1.0)+1,s=0;
    ///mark[1]=1;///1 if not prime.
    prime.push_back(2);
    //for(int i=4;i<=n;i+=2)mark[i]=1;
    for(int i=3;i<=n;i+=2){
        if(!(mark[i>>5]&(1<<(i&31)))){prime.push_back(i);
            if(i<=limit){///karon limit er upor theke n porjonto not prime gula already cuta hoise.
                for(int j=i*i;j<=n;j+=i*2){
                    mark[j>>5]|=(1<<(j&31));
                }
            }
        }
    }
}



int main()
{//_
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll t=1,ca=1;
    cin>>t;
    sieve(100000010);
    while(t--){
        ll l,u;
        cin>>l>>u;
        ll x=upper_bound(prime.begin(),prime.end(),u)-prime.begin();
        ll y=lower_bound(prime.begin(),prime.end(),l)-prime.begin();
        printf("Case %lld: %lld\n",ca++,max(0ll,x-y));
    }
}
