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
    v99 t;cin>>t;
    while(t--)
    {
        string s,c;cin>>s>>c;
        v99 smini=-1,p=0,change=0,cmaxi=-1;v99 a=100,b=-1;
        bool dukci=false;
        //cout<<c.size()<<ses;
        //cout<<s.compare(c)<<ses;
        if(s.compare(c)<0)cout<<s<<ses;
        else
        {
            for(v99 i=0;i<s.size() && i<c.size();i++)
            {
                v99 x=s[i],y=c[i];
                if(x>y)
                {
                    b=y;
                    change=min(s.size(),c.size());
                    if(i==change-1)p=1;
                    dukci=true;
                    change=i;
                    i++;
                    for(v99 j=i;j<s.size();j++)
                    {
                        v99 x=s[j];//cout<<"J  "<<j<<ses;
                        if(s.size()<c.size() && j==s.size()-1)
                        {
                            if(b>=x){b=x;smini=j;}
                        }
                        else {if(b>x){b=x;smini=j;}}
                    }
                }
            if(dukci)break;
            }
            //cout<<a<<whp<<b<<ses;
           // cout<<smini<<whp<<cmaxi<<ses;
            if(!dukci || p==1)cout<<"---"<<ses;
            else if(smini==-1)cout<<"---"<<ses;
            else
            {
                swap(s[smini],s[change]);
                if(s.compare(c)>0)cout<<"---"<<ses;
                else cout<<s<<ses;
            }
        }
    }
    return 0;
}
///






///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

