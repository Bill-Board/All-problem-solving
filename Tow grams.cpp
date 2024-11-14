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

string convert(string a,v99 st)
{
    string s="";
        s=s+a[st]+a[st+1];
    return s;
}

int main()
{
    string a,b;
    v99 h=0,n;cin>>n>>a;
    map<string,v99>mp;
    map<string,v99>::iterator it;
    for(v99 i=0;i<n-1;i++)
    {
        string q=convert(a,i);
        //cout<<q<<ses;
        mp[q]++;
    }
    for(it=mp.begin();it!=mp.end();++it)
    {
        v99 x=it->second;
        if(h<x)
        {
            h=x;
            b=it->first;
        }
    }
    cout<<b<<ses;

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
