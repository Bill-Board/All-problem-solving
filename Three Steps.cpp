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
    IOS
    v99 t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        for(v99 i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
                s[i]=s[i]+32;
            else
                s[i]=s[i]-32;
        }
        //cout<<s<<ses;
        reverse(s.begin(),s.end());
        //cout<<s<<ses;
        for(v99 i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                v99 x=s[i]-'A'+1;
                //cout<<s[i]<<whp<<x<<ses;
                if(x>13)
                {
                    v99 r=26-x;
                    s[i]=(13-r)-1+'A';
                }
                else
                {
                    s[i]=x+12+'A';
                }
            }
            else
            {
                v99 x=s[i]-'a'+1;
                if(x>13)
                {
                    v99 r=26-x;
                    s[i]=(13-r)-1+'a';
                }
                else
                {
                    s[i]=x+12+'a';
                }
            }
            //cout<<s<<ses;
        }
        cout<<s<<ses;
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
