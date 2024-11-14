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
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
float area(v99 x1, v99 y1, v99 x2, v99 y2,
                            v99 x3, v99 y3)
{
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) +
                x3 * (y1 - y2)) / 2.0);
}
bool check(v99 x1, v99 y1, v99 x2, v99 y2, v99 x3, v99 y3, v99 x4, v99 y4, v99 x, v99 y)
{
    float A = area(x1, y1, x2, y2, x3, y3) + area(x1, y1, x4, y4, x3, y3);
    float A1 = area(x, y, x1, y1, x2, y2);
    float A2 = area(x, y, x2, y2, x3, y3);
    float A3 = area(x, y, x3, y3, x4, y4);
    float A4 = area(x, y, x1, y1, x4, y4);
    return (A == A1 + A2 + A3 + A4);
}


int main()
{
    IOS
    v99 t,t1=1;cin>>t;
    while(t--)
    {
        v99 q;cin>>q;
        map<pair<v99,v99>,v99>vp;
        cout<<"Case "<<t1++<<":"<<ses;
        while(q--)
        {
            v99 f,a,b,c,d,countt=0;
            cin>>f;
            if(f==0){cin>>a>>b;vp[{a,b}]++;}
            else
            {
                cin>>a>>b>>c>>d;
                for(auto enti=vp.begin();enti!=vp.end();++enti)
                {
                    auto key=enti->first;
                    v99 x=key.first,y=key.second;
                    if(check(a,b,c,b,c,d,a,d,x,y))countt++;
                }
                cout<<countt<<ses;
            }
        }
    }
    return 0;
}
/**
9
0 1 1
0 2 6
1 1 1 6 6
1 2 2 5 5
0 5 5
1 0 0 6 5
0 3 3
0 2 6
1 2 1 10 10
*/



/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
