//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
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
    test
    {
      v99 n;cin>>n;
      v99 a[n+1];for(v99 i=0;i<n;i++)cin>>a[i];
      map<v99,v99>mpp,mpp2;vector<pair<v99,v99> >vp;
      v99 visi[mxi];memset(visi,0,sizeof visi);
      for(v99 j=n-1;j>=0;j--)
      {
          if(mpp2[a[j]])break;
          mpp2[a[j]]++;
          auto it=mpp2.end();--it;
          if(it->first==mpp2.size())visi[j]=1;
      }

      //for(v99 i=0;i<n;i++)cout<<visi[i]<<whp;cout<<ses;
      for(v99 i=0;i<n;i++)
        {
              if(mpp[a[i]])break;
              mpp[a[i]]++;
              auto it=mpp.end();--it;
              if(it->first==mpp.size())
              {
                  if(visi[i+1])vp.push_back(make_pair(i+1,n-i-1));
              }
        }
        cout<<vp.size()<<ses;
        for(v99 i=0;i<vp.size();i++)cout<<vp[i].first<<whp<<vp[i].second<<ses;
    }
    return 0;
}




/**
while(i<n)
      {
          if(mpp[a[i]])break;
          mpp[a[i]]++;
          auto it=mpp.end();--it;
          if(it->first==mpp.size())visi.push_back(i);
          i++;
      }
      while(j>=0)
      {
          if(mpp2[a[j]])break;
          mpp2[a[j]]++;
          auto it=mpp2.end();--it;
          if(it->first==mpp2.size())visi2.push_back(i);
          j--;
      }

map<v99,v99>ooo;
        v99 n,i=0;cin>>n;v99 a[n];
        for(v99 i=0;i<n;i++){cin>>a[i];ooo[a[i]]++}
        vector<pair<v99,v99>>vp;map<v99,v99>mpp;
        while(1)
        {
            v99 j=n-1;bool ok=false;
            while(i<n)
            {
                //cout<<"i "<<i<<ses;
                if(mpp[a[i]]!=0){ok=true;break;}
                mpp[a[i]]++;
                auto it=mpp.end();--it;
                if(it->first==mpp.size()){break;}
                ++i;
            }if(i==n){ok=true;}
            map<v99 ,v99>mpp2;//cout<<"i  "<<i<<ses;
            for(j=i+1;j<n;j++)
            {
                if(mpp2[a[j]]!=0){break;}
                //cout<<"ok "<<a[j]<<ses;
                mpp2[a[j]]++;
            }//cout<<j<<ses;
            //for(auto p:mpp)cout<<p.first<<whp;cout<<ses;
            //for(auto p:mpp2)cout<<p.first<<whp;cout<<ses;
            if(!mpp2.empty())
            {
                ++j;auto it=mpp2.end();--it;//cout<<"it "<<it->first<<whp<<n-mpp.size()<<ses;
            if(it->first==mpp2.size() && n==mpp.size()+mpp2.size()){vp.push_back(make_pair(mpp.size(),mpp2.size()));}
            }
            if(ok){break;}
            ++i;
        }cout<<vp.size()<<ses;
        for(v99 i=0;i<vp.size();i++)cout<<vp[i].first<<whp<<vp[i].second<<ses;

       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
