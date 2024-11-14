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

    //freopen("data.out","w",stdout);
    test
    //while(1)
    {
        v99 n,m,cr_h=0;char a[35][35];
        cin>>n>>m;
        rep1(i,1,n)
        {
            rep1(j,1,m)cin>>a[i][j];
        }
        v99 x=2,y=n+m;
        while(x<y)
        {
            v99 one=0,z=0;
            rep1(i,1,n)
            {
                rep1(j,1,m)
                {
                    if(i+j==x || i+j==y)
                    {
                        if(a[i][j]=='0')z++;
                        else one++;
                    }
                }
            }
            cr_h+=min(z,one);
            x++;y--;
        }cout<<cr_h<<ses;
    }
    return 0;
}




/**

v99 one=0,z=0;
            v99 p=i;
            for(v99 k=p,j=1;k>0;k--,j++)
            {
                if(a[k][j]=='1')one++;
                else z++;
            }
            p=w;
            for(v99 k=p,j=m;k<=n;k++,j--)
            {
                if(a[k][j]=='1')one++;
                else z++;
            }
            v99 dif1=(one+z)-max(one,z);
            cr_h+=dif1;
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

