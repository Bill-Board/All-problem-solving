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
# define INF 0x3f3f3f3f
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int>> pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
bool u=0,d=0,l=0,r=0,ru=0,lu=0,ld=0,rd=0;
void kita(v99 x1,v99 x2,v99 y1,v99 y2,char &a,char &b)
{
        if(x1==x2)
        {
            if(x1>x2)a='D',b='D',d=1;
            else a='U',b='U',u=1;
        }
        if(y1==y2)
        {
            if(y1<y2)a='R',b='R',r=1;
            else a='L',b='L',l=1;
        }
        if(x1<x2 && y1<y2)a='R',b='U',ru=1;
        if(x1>x2 && y1<y2)a='L',b='U',lu=1;
        if(x1<x2 && y1>y2)a='R',b='D',ru=1;
        if(x1>x2 && y1>y2)a='L',b='D'ld=1;
}



int main()
{
    //test
    //while(1)
    {
        v99 n,x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
        string s;cin>>n>>s;
        char a,b;kita(x1,x2,y1,y2,a,b);
        cout<<a<<whp<<b<<ses;
        v99 nx1=0,nx2=0,ny1=x2-x1,ny2=y2-y1;

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

