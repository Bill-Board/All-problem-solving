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
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IOS
    v99 t;cin>>t;
    while(t--)
    {
        string a[10];
        v99 n,countt=0;cin>>n;
        map<string,v99>mpp,mpp2;
        map<string,v99>::iterator it;
        rep0(i,n)
        {
            cin>>a[i];
            mpp[a[i]]++;
        }
        mpp2=mpp;
       // rep0(i,n)cout<<a[i]<<ses;
        //cout<<ses<<ses<<ses;
        bool hoise=false;
        //for(it=mpp.begin();it!=mpp.end();++it)
            //cout<<it->first<<whp<<it->second<<ses;
        if(mpp.size()==n)
        {
            cout<<0<<ses;
            rep0(i,n)cout<<a[i]<<ses;
        }
        else
        {
            rep0(j,n)
            {
               v99 quan= mpp[a[j]];
               if(quan>1)
               {
                   string s=a[j],s1=a[j];
                   rep0(i,10)
                        {
                            v99 c=s[0]-'0';//cout<<"c  "<<c<<ses;
                            if(c==9)c=0;
                            else c=c+1;
                            s[0]=c+48;
                            if(mpp.count(s)==0){mpp[s]++;mpp[s1]--;a[j]=s;break;}
                            //s=s1;
                        }
               }
               //cout<<a[j]<<ses;
            }
            cout<<n-mpp2.size()<<ses;
            rep0(i,n)cout<<a[i]<<ses;
        }

    }
    return 0;
}


    /**for(it=mpp.begin();it!=mpp.end();++it)
            {
                    v99 h=it->second;
                    --h;//cout<<"h  "<<h<<ses;
                    string s=it->first;string s1=s;
                    while(h--)
                    {
                        s=s1;
                        rep0(i,10)
                        {
                            v99 c=s[0]-'0';//cout<<"c  "<<c<<ses;
                            if(c==9)c==0;
                            else c=c+1;
                            s[0]=c+48;
                            //cout<<"c  "<<c<<ses;cout<<"s[i]  "<<s[i]<<ses;
                            //cout<<"s  "<<s<<"  count "<<mpp.count(s)<<ses;;
                            if(mpp2.count(s)==0){mpp2[s]++;break;}
                            //s=s1;
                        }
                    }
            }
            cout<<n-mpp.size()<<ses;
            for(it=mpp2.begin();it!=mpp2.end();++it)
                cout<<it->first<<ses;




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
