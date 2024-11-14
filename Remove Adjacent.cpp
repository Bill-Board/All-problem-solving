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

int main()
{
    v99 n;cin>>n;
    string s;cin>>s;
    s=('#'+s+'#');
    //cout<<s<<ses;
    while(1)
    {
        v99 cnt=0;v99 h=-1,pos=0;
        for(v99 i=1;i<s.size()-1;i++)
        {
            if(s[i]=='a'){cnt++;continue;}
            v99 x=s[i]-'a',y=s[i-1]-'a',z=s[i+1]-'a';

            if(x-1==y || x-1==z)
            {
                if(h<x){h=x;pos=i;}
                //cout<<"x "<<x<<" y "<<y<<" z "<<z<<" pos "<<pos<<" i "<<i<<ses;
            }
            else cnt++;
        }
        if(cnt==s.size()-2 || s.size()==3){cout<<n-s.size()+2<<ses;return 0;}
        string emni="";
        for(v99 i=0;i<s.size();i++){if(i==pos)continue;emni+=s[i];}
        s.clear();s=emni;emni.clear();
        //cout<<s<<ses;
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

