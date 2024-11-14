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
///           string single character erase-
///           s.erase(s.begin()+x); where s is string name
///           ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
int main()
{
    char c,d;v99 a,b,x1,y1,x2,y2;string s,ss;
    cin>>c>>y1>>d>>y2;x1=c-'a'+1;x2=d-'a'+1;
    bool lu=false,ld=false,ru=false,rd=false;
    if(x1<x2)
    {
        if(y1<y2)s="RU",a=1,b=1,ru=true;
        else s="RD",a=1,b=-1,rd=true;
    }
    else
    {
        if(y1<y2)s="LU",a=-1,b=1,lu=true;
        else s="LD",a=-1,b=-1,ld=true;
    }
    v99 count=0;
    while(x1!=x2 && y1!=y2)
    {
        x1+=a;y1+=b;
        count++;
    }

    if(x1==x2)
    {
        if(y1<y2)ss="U",a=0,b=1;
        else ss="D",a=0,b=-1;
    }
    else
    {
        if(x1<x2)ss="R",a=1,b=0;
        else ss="L",a=-1,b=0;
    }
    v99 count1=0;
    while(x1!=x2 || y1!=y2)
    {
        x1+=a;y1+=b;
        count1++;
    }
    cout<<count+count1<<ses;
    while(count--)cout<<s<<ses;
    while(count1--)cout<<ss<<ses;

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
