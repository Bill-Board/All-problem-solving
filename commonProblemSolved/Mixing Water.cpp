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
#define mxi 2003
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define mod 0.00000001
#define CLR(a) memset(a,0,sizeof(a));
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}

int main()
{
    test
    //while(1)
    {
        v99 h,c,et;cin>>h>>c>>et;long double eto=et;
        v99 l=1,r=1000000,crush;
        long double ava=(h+c)/2;//cout<<ava<<ses;
        v99 ek,dui;
        if(eto==h){cout<<1<<ses;continue;}
        if(ava>=eto){cout<<2<<ses;continue;}
        v99 mid,loop=100;long double val1,val2;
        while(loop--)
        {
            mid=(l+r)/2;
            if(mid%2==0)mid++;
            long double ans=0;
            v99 gun=(mid-1)/2;
            ans=gun*(h+c);
            ans+=h;
            long double kot=(long double)ans/(long double)mid;
            //cout<<kot<<whp;cout<<l<<whp<<mid<<whp<<r<<ses;
            if(kot<eto)
            {
                ek=mid;
                r=mid-1;
                val1=kot;
            }
            else
            {
                dui=mid;
                l=mid+1;
                val2=kot;
            }
            if(l>r)break;
        }
        long double dif=abs(val1-val2),dif2=abs(val1-eto),dif3=abs(val2-eto);
        if(dif<=mod)cout<<min(ek,dui)<<ses;
        else if(dif3>dif2)cout<<ek<<ses;
        else cout<<dui<<ses;
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

