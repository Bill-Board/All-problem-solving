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

string con(char c,char d)
{
    string s="";
    s=s+c+d;
    return s;
}
string con2(char c,char d,char e)
{
    string s="";
    s=s+c+d+e;
    return s;
}

int main()
{
    string s;cin>>s;
    for(v99 i=0;i<s.size();i++)
    {
        if(s[i]=='8'){cout<<"YES\n"<<8<<ses;return 0;}
        if(s[i]=='0'){cout<<"YES\n"<<0<<ses;return 0;}
    }
    if(s.size()>1)
    {
        for(v99 i=0;i<s.size()-1;i++)
        {
            for(v99 j=i+1;j<s.size();j++)
            {
                string s1=con(s[i],s[j]);
                v99 n=stoi(s1);
                if(n%8==0){cout<<"YES\n"<<n<<ses;return 0;}
            }
        }
    }
    if(s.size()>2)
    {
        for(v99 i=0;i<s.size()-2;i++)
    {
        for(v99 j=i+1;j<s.size()-1;j++)
        {
            for(v99 k=j+1;k<s.size();k++)
                {
                    string s1=con2(s[i],s[j],s[k]);
                    v99 n=stoi(s1);
                    if(n%8==0){cout<<"YES\n"<<n<<ses;return 0;}
                }
        }
    }
    }
    cout<<"NO"<<ses;
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
