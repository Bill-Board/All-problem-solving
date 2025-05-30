#include<bits/stdc++.h>

#define ll                      long long int
#define ull                     unsigned long long int
#define pii                     pair<int,int>
#define pll                     pair<ll,ll>
#define sc                      scanf
#define scin(x)                 sc("%d",&(x))
#define scln(x)                 sc("%lld",&(x))
#define pf                      printf
#define ms(a,b)                 memset(a,b,sizeof(a))
#define pb(a)                   push_back(a)
#define mp                      make_pair
#define db                      double
#define EPS                     10E-10
#define ff                      first
#define ss                      second
#define sqr(x)                  (x)*(x)
#define vi                      vector<int>
#define vl                      vector<ll>
#define vii                     vector<vector<int> >
#define vll                     vector<vector<ll> >
#define DBG                     pf("HI\n")
#define MOD                     1000000007
#define CIN                     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define RUN_CASE(t,T)           for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)                 printf("Case %d: ",t)
#define CASEl(t)                printf("Case %d:\n",t)
#define intlimit                2147483648
#define longlimit               9223372036854775808
#define infinity                (1<<28)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                ((a)*(b))/gcd(a,b)
#define mx                      123456789
#define PI                      2*acos(0.0)
#define rep(i,a,b)              for(__typeof(i) i=a;i<=b;i++)
#define rev(i,a,b)              for(__typeof(i) i=a;i>=b;i--)

using namespace std;

int main()
{
    int i,j,n,er=0,temp,cnt=0;
    scin(n);
    vector<int>myvec,x;
    string s1;
    for(i=0;i<n;i++)
    {
        scin(temp);
        myvec.push_back(temp);
    }
    x=myvec;
    sort(x.begin(),x.end());
    cin>>s1;
    for(i=0;i<n-1;i++)
    {
        if(s1[i]=='0' && (myvec[i]>myvec[i+1]))
        {
            er+=1;
            break;
        }
        else if(s1[i]=='1')
        {
            if(myvec[i+1]<myvec[i])
            {
                swap(myvec[i+1],myvec[i]);
            }
        }
    }

    if(er>0)
        pf("NO\n");
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(myvec[i+1]<myvec[i] && s1[i]=='1')
                swap(myvec[i+1],myvec[i]);
        }
        if(myvec == x)
            pf("YES\n");
        else
            pf("NO\n");
    }
    return 0;
}
 
