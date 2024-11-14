
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

int main()
{
    test
    {
        v99 n;cin>>n;v99 prime[12]={2,3,5,7,11,13,17,19,23,29,31};
        v99 a[n],visi[n];memset(visi,0,sizeof visi);
        for(v99 i=0;i<n;i++)cin>>a[i];
        v99 q=0,dd=1,ss=0;
        for(v99 i=0;i<11;i++)
        {
            bool ok=false;
            for(v99 j=0;j<n;j++)
            {
                if(visi[j])continue;
                if(a[j]%prime[i]==0)
                {
                    ok=true;
                    ++ss;
                    visi[j]=1;
                    a[j]=dd;
                    q=max(q,a[j]);
                }
                if(ss==n)break;
            }if(ok)++dd;
            if(ss==n)break;
        }cout<<q<<ses;
        for(v99 i=0;i<n;i++)cout<<a[i]<<whp;cout<<ses;
    }
    return 0;
}




/**for(v99 i=0;i<n;i++)
        {
            v99 cin>>a[i];
            for(v99 j=0;j<11;j++)
            {
                if(a[i]%prime[j]==0)
                {
                    mpp[]
                }
            }
        }
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
