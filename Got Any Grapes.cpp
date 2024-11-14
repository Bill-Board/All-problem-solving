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
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    v99 a,d,m,g,p,b;
    cin>>a>>d>>m>>g>>p>>b;
    bool flag=false;
    if(a+d+m>g+p+b){cout<<"NO"<<ses;return 0;}
    else
    {
        if(a<=g)g=g-a;
        else{cout<<"NO"<<ses;return 0;}
        if(d<=g+p)
        {
            if(d<g){g=g-d;d=0;}
            else {d=d-g;g=0;}
            if(d<p){p=p-d;d=0;}
            else {d=d-p;p=0;}
        }
        else{cout<<"NO"<<ses;return 0;}
        if(m<=g+p+b){cout<<"YES"<<ses;return 0;}
        else{cout<<"NO"<<ses;return 0;}
    }
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤
