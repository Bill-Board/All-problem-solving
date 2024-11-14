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
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    test
    {
        string s,an1="",an2="";
        v99 n,pos;cin>>n>>s;pos=n;
        for(v99 i=0;i<n;i++){if(s[i]=='1'){pos=i;break;}}//cout<<pos<<ses;
        for(v99 i=0;i<pos;i++)
        {
            if(s[i]=='2')
            {
                an1+='1';
                an2+='1';
            }
            else if(s[i]=='1')
            {
                an1+='0';
                an2+='1';
            }
            else
            {
                an1+='0';
                an2+='0';
            }
        }
        if(pos==n){cout<<an1<<ses<<an2<<ses;continue;}
        an1+='1';an2+='0';
        for(v99 i=pos+1;i<n;i++)
        {
            an1+='0';
            an2+=s[i];
        }
        cout<<an1<<ses<<an2<<ses;
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

