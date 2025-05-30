//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
string func(string s)
{
    string s1;
    for(v99 i=0;i<s.size();i++)
    {
        if(s[i]==' ')continue;
        s1.push_back(s[i]);
    }
    return s1;
}

string mapping(string s1, v99 stt,v99 loop)
{
    string s;
    for(v99 i=stt;i<stt+loop;i++)s.push_back(s1[i]);
    return s;
}


int main()
{
    v99 t,p=1;cin>>t;
    getchar();
    while(t--)
    {
        string s,m,s1;
        getline(cin,s);
        map<string,v99>mpp;
        s1=func(s);
        cin>>m;v99 len=s1.size()-m.size()+1;
        rep0(i,len)
        {
            string s2=mapping(s1,i,m.size());
            mpp[s2]++;
        }
        cout<<"Case "<<p++<<": "<<mpp[m]<<ses;
        getchar();
    }
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
