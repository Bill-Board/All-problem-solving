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
        v99 n,k;cin>>n>>k;v99 a[n+1];
        v99 visi[110];memset(visi,0,sizeof visi);
        vector<long double> p;
        for(v99 i=0;i<=100;i++)
        {
            long double kk=k;
            p.push_back(pow(kk,i+0.0));
        }
        //for(auto it:p)cout<<it<<whp;cout<<ses;
        for(v99 i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);bool ki=false;
        for(v99 i=0;i<n;i++)
        {
            vector<v99>qqq;bool ok=false;
            if(a[i]==0)continue;
            while(1){
            auto low=upper_bound(p.begin(),p.end(),(long double)a[i]);
            v99 pos=(low-p.begin())-1;
            if(visi[pos]){ki=true;break;}
            //cout<<"pos "<<pos<<ses;
            qqq.push_back(pos);
            a[i]-=p[pos];//cout<<a[i]<<ses;
            if(a[i]==0){ok=true;break;}
            if(a[i]<0)break;
            }
            if(ok){
                for(v99 i=0;i<qqq.size();i++){if(visi[qqq[i]])ki=true;visi[qqq[i]]=1;}
            }qqq.clear();
            if(ki)break;
        }//cout<<ki<<ses;
        if(ki)cout<<"NO"<<ses;
        else cout<<"YES"<<ses;
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
