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
v99 m,n;
char ami[501][501];




int main()
{
    //test
    //while(1)
    {
        cin>>n>>m;
        rep0(i,0,n)
        {
            rep0(j,0,m)
            cin>>ami[i][j];
        }
        rep0(i,0,n)
        {
            rep0(j,0,m)
            {
                if(ami[i][j]=='S')
                {
                    rep0(k,0,4)
                    {
                        v99 x=i+fx[k];
                        v99 y=j+fy[k];
                        if(x>=0 && x<n &&y>=0 && y<m && ami[x][y]=='.')
                        {
                            ami[x][y]='D';
                        }
                        else if(x>=0 && x<n &&y>=0 && y<m && ami[x][y]=='W')
                        {
                            return cout<<"No"<<ses,0;
                        }
                    }
                }
            }

        }
        cout<<"Yes"<<ses;
        rep0(i,0,n)
            {
                rep0(j,0,m)
                cout<<ami[i][j];
                cout<<ses;
            }

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

