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
        v99 n,k;cin>>n>>k;string s;cin>>s;
        vector<v99>a;v99 o=0;
        bool prtm=false;if(s[0]=='0')prtm=true;
        bool last=false;if(s[n-1]=='0')last=true;
        rep0(i,0,n)
        {
            char x=s[i];
            if(x=='1')
            {
                if(o)a.push_back(o);
                o=0;
            }
            else o++;
        }if(o)a.push_back(o);v99 cr_h=0;
        if(a.size()==1 && last && prtm)
        {
            v99 ans=(a[0]-1)/(k+1);
            cout<<ans+1<<ses;
            continue;
        }
        //for(auto i:a)cout<<i<<whp;cout<<ses;
        v99 j=0;
        for(auto i:a)
        {
            ++j;
            if(j==1 && prtm)
                {cr_h+=(i/(k+1));continue;}
            if(j==a.size() && last)
                {cr_h+=(i/(k+1));continue;}
            if(i<=2*k)continue;
            v99 rem=i%(k+1);
            cr_h+=(i/(k+1));
            if(rem!=k)cr_h--;
        }cout<<cr_h<<ses;
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

