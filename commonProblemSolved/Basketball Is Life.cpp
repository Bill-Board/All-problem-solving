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
#define CLR(a) memset(a,0,sizeof(a));
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
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
    //test
    //while(1)
    {
        map<string,v99>l,t;
        rep0(i,0,5)
        {
            string s;cin>>s;l[s]=0;
        }
        rep0(i,0,5)
        {
            string s;cin>>s;t[s]=0;
        }
        v99 r;cin>>r;r*=r;
        while(1)
        {
            string s;cin>>s;
            if(s=="Finish")break;
            v99 x,y;cin>>x>>y;
            v99 dif=(x*x)+(y*y);
            if(dif<=r)
            {
                if(l.find(s)==l.end())
                {
                    t[s]+=2;
                }
                else l[s]+=2;
            }
            else
            {
                if(l.find(s)==l.end())
                {
                    t[s]+=3;
                }
                else l[s]+=3;
            }
        }v99 h=0,m=0,oma=0;string ss;
        for(auto i:l)
        {
            h+=i.second;
            if(oma<i.second)
            {
                oma=i.second;
                ss=i.first;
            }

        }
        for(auto i:t)
        {
            m+=i.second;
            if(oma<i.second)
            {
                oma=i.second;
                ss=i.first;
            }
        }
        if(h>m)cout<<"The Leos"<<ses;
        else if(h<m)cout<<"The Tigers"<<ses;
        else cout<<"Draw"<<ses;
        cout<<ss<<ses;
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

