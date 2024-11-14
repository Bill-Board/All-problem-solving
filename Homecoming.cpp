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
    IOS
    v99 t;cin>>t;
    while(t--)
    {
        v99 a,b,p;cin>>a>>b>>p;string s;cin>>s;
        //vector<v99>rrt,ccb;
        char w=s[0];
        if(w=='A')s='B'+s;
        else s='A'+s;char suru=s[s.size()-1],c=suru;
        bool hmm=false,konta=false;//cout<<s<<ses;
        ///if(suru=='A')konta=true;  /// mani 1m ta bus.
        v99 rrb=0,cca=0,pos=s.size()-1;//cout<<c<<ses;
        if(s[s.size()-1]==s[s.size()-2])
        {
            hmm=true;
        }
        if(hmm)
        {
            for(v99 i=s.size()-2;i>=0;i--)
            {
                if(c!=s[i])
                {
                    if(c=='A'){p-=a;}
                    else {p-=b;}
                    c=s[i];
                    if(i!=0)
                        pos=i+1;//cout<<i<<" p "<<p<<ses;
                    if(p==0)pos=i;//cout<<"pos "<<pos<<ses;
                }//cout<<p<<whp<<pos<<ses;
                if(p<=0){cout<<min(pos,(v99)(s.size()-1))<<ses;konta=true;break;}
            }
        }
        else
        {
            for(v99 i=s.size()-2;i>=0;i--)
            {
                if(c!=s[i])
                {
                    c=s[i];
                    if(c=='A'){p-=a;}
                    else {p-=b;}
                    if(i!=0)
                        pos=i+1;//cout<<i<<" p "<<p<<ses;
                    if(p==0)pos=i;//cout<<"pos "<<pos<<ses;
                }//cout<<p<<whp<<pos<<ses;
                if(p<=0){cout<<min(pos,(v99)(s.size()-1))<<ses;konta=true;break;}
            }
        }
        if(!konta)cout<<1<<ses;
        /*cout<<pos<<ses;
        if(c==s[0] && c==s[1])
        {
             if(c=='A'){cca++;p-=a;}
                else {rrb++;p-=b;}
             if(p<0){cout<<pos+1<<" yes "<<ses;return 0;}
        }
        cout<<cca<<whp<<rrb<<ses;*/
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
