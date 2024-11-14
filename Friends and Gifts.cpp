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
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    v99 n;cin>>n;
    v99 a[n+1],b[n+1];
    map<v99,v99>m,m1;
    map<v99,v99>::iterator it;
    for(v99 i=1;i<=n;i++)
    {
        cin>>a[i];b[i]=a[i];
        if(a[i]!=0)m[a[i]]=1;
    }
    //for(it=m.begin();it!=m.end();++it)
      //  cout<<it->first<<whp<<it->second<<ses;
    for(v99 i=1;i<=n;i++)
    {
        if(m.count(i)==0)m1[i]=1;
    }m.clear();m=m1;
    //for(it=m.begin();it!=m.end();++it)
      //  cout<<it->first<<whp<<it->second<<ses;
    bool gar=false;
    for(v99 i=n;i>=1;i--)
    {

        if(a[i]==0)
        {
            it=m1.begin();v99 x=it->first;
            if(x==i){
                if(m1.size()==1){gar=true;break;}
                    ++it;x=it->first;}
            a[i]=x;m1.erase(it);
        }//cout<<a[i]<<whp;
        if(gar)break;
    }//cout<<ses;
    if(gar){
            for(v99 i=1;i<=n;i++)
            {
                if(b[i]==0)
                {
                    it=m.begin();v99 x=it->first;
                    if(x==i){++it;x=it->first;}
                    b[i]=x;m.erase(it);
                }//cout<<a[i]<<whp;
            }//cout<<ses;
            for(v99 j=1;j<=n;j++)cout<<b[j]<<whp;
            cout<<ses;
        }
    else
    {
        for(v99 i=1;i<=n;i++)cout<<a[i]<<whp;
            cout<<ses;
    }//cout<<gar<<ses;
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤
