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
# define INF 0x3f3f3f3f
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int>> pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 b[mxi];
int main()
{
    //test
    //while(1)
    {
        v99 n,k,h=0,m=200;cin>>n>>k;
        vector<pair<v99,pair<v99,v99>>vec;
        for(v99 i=0;i<n;i++)
        {
            v99 x,y;cin>>x>>y;vec.push_back(make_pair(x,make_pair(i,y)));
            b[x]+=1;
            b[y+1]-=1;h=max(h,max(x,y));
            m=min(m,min(x,y));
        }//sort(vec.begin(),vec.end());
        for(v99 i=m;i<=h;i++)b[i]+=b[i-1];
        //for(v99 i=m;i<=h;i++)cout<<b[i]<<whp;cout<<ses;
        map<v99,v99>mpp;bool ok=true;
        while(ok)
        {
            bool ki=false;
            for(v99 j=m;j<=h;j++){if(b[j]>k)ki=true;}
            if(!ki)break;
            v99 ans=0,pos=-1;
            for(v99 i=0;i<n;i++)
            {
                v99 q=0;
                if(mpp[i]!=0)continue;
                for(v99 j=m;j<=h;j++)
                {
                    if(b[j]>k && j>=vec[i].first && j<=vec[i].second)q++;
                }
                //cout<<q<<ses;
                if(ans<=q){ans=q;pos=i;}
            }
            if(pos==-1)continue;
            //cout<<ses<<pos<<ses<<ses;
            mpp[pos]++;
            for(v99 j=vec[pos].first;j<=vec[pos].second;j++)b[j]--;

        }v99 ans=0;
        for(v99 i=0;i<n;i++)
        {
            if(mpp[i])ans++;
        }cout<<ans<<ses;if(!ans)return 0;
        for(v99 i=0;i<n;i++)
        {
            if(mpp[i])cout<<i+1<<whp;
        }cout<<ses;

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
