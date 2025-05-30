 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cout<<x<<ses;
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef int v99;
typedef unsigned long long ull;
using namespace std;
int main()
{

    //freopen("data.out","w",stdout);
    //test 91 42 25
    //while(1)
    {
        IOS
        //SieveOfEratosthenes(1000000);
        v99 a,b,c,cr_h=0;cin>>a>>b>>c;
        for(v99 i=1;i<=a;i++)
        {
            for(v99 j=1;j<=b;j++)
            {
                for(v99 k=1;k<=c;k++)
                {
                    v99 kot=i*j*k;
                    v99 sq=sqrt(kot),cnt=0;
                    for(v99 p=1;p<=sq;p++)
                    {
                        if(kot%p==0)
                        {
                            if(p==kot/p)cnt++;
                            else cnt+=2;
                        }
                    }
                    cr_h+=cnt;
                    /*if(kot==1)cr_h++;
                    else if(prime[kot])cr_h+=2;
                    else cr_h+=achha(kot);*/
                }
            }
        }
        cout<<cr_h<<ses;
    }
    return 0;
}



      ///  Alhamdulillah...
