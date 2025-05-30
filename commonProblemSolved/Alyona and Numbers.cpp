 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
    v99 n,m,sum=0;
    cin>>n>>m;
    vector<v99>a;a.push_back(0);
    for(v99 i=1;i<=min(n,(v99)5);i++)
    {
        //cout<<"SUM "<<sum<<ses;
        v99 rem=m%5, x=m/5;
        if(i==5)sum--;
        if(rem+i>=5)sum++;
        sum+=x;
        //cout<<"rem "<<rem<<" x "<<x<<" ans "<<sum<<"\n";
        a.push_back(sum);
    }
    v99 x=n/5,rem=n%5;//cout<<"qrem "<<rem<<" qx "<<x<<" qans "<<sum<<"\n";
    sum=(sum*x);sum+=(a[rem]);
    cout<<sum<<ses;
    return 0;
}




/**

        ans+=x;
        if(rem==(5-i))ans++;
        if(i==4)ans++;
        a.push_back(ans);
        cout<<i<<whp<<ans<<ses;

        for(auto i: a)cout<<i<<whp;cout<<ses;
    v99 x=n/5,rem=n%5;
    cout<<ans<<ses<<n<<ses<<rem<<ses;
    ans=(ans*x);
    ans+=(a[rem]);
    cout<<ans<<ses;

       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

