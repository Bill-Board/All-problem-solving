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
#define mxi 200003
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
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
{///                         10111101000010100
    test
    //while(1)
    {
        string s;cin>>s;v99 n=s.size();s='+'+s;
        v99 w=0,o_b=LLONG_MAX,q=0,u=0,p=0,z[n+4],one[n+4],zi[n+4],onei[n+4];CLR(z,0);CLR(one,0);CLR(zi,0);CLR(onei,0);
        rep1(i,1,n){if(s[i]=='1')one[i]=1,onei[i]=1;}
        rep1(i,1,n){if(s[i]=='0')z[i]=1,zi[i]=1;}
        rep1in(i,n,0)onei[i]+=onei[i+1];///  samne koita one koita
        rep1in(i,n,0)zi[i]+=zi[i+1];/// samne koita zero ache
        rep1(i,1,n)z[i]+=z[i-1];/// pichone koita zero ache
        rep1(i,1,n)one[i]+=one[i-1];/// pichone koita one ache
        rep1(i,1,n)
        {
            v99 pione=one[i];/// 6
            v99 picze=z[i];///   2
            v99 samon=onei[i+1];/// 2
            v99 samze=zi[i+1];/// 7
            o_b=min(o_b,min(pione+samze,picze+samon));
        }

        cout<<o_b<<ses;


    }
    return 0;
}




/**bool zz=false,oo=false;
        v99 i=1;char c=s[1];
        while(s[i]==c && i<=n){i++;q++;}
        while(s[i]!=c && i<=n){i++;w++;}
        while(i<=n)
        {
            if(s[i]==c)p++;
            else u++;i++;
        }
        cout<<q<<whp<<w<<whp<<p<<whp<<u<<ses;
        o_b=min(o_b,min(p,u+w));
        i=n;c=s[n];q=0;w=0;p=0;u=0;
        while(s[i]==c && i>0){i--;q++;}
        while(s[i]!=c&& i>0){i--;w++;}
        while(i>0)
        {
            if(s[i]==c)p++;
            else u++;i--;
        }
        cout<<q<<whp<<w<<whp<<p<<whp<<u<<ses;
        o_b=min(o_b,min(p,u+w));cout<<o_b<<ses;
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

