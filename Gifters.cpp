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

int main()
{
    v99 n;
    while(cin>>n)
    {
        v99 qq;qq=n;
        map<string,v99>mpp,mpp2;
        vector<string>vec;
        for(v99 i=0;i<n;i++)
        {
            string s;cin>>s;
            vec.push_back(s);
        }
        while(qq--)
        {
            string s;cin>>s;
            v99 nn,q;cin>>nn>>q;
            //mpp[s]+=nn;
            if(!q)continue;
            v99 dif=nn/q;
            v99 ans=dif*q;
            mpp2[s]+=ans;
            //cout<<"dif "<<dif<<ses;
            while(q--)
            {
                string ss;cin>>ss;
                mpp[ss]+=dif;
            }
            //for(auto k:mpp)cout<<k.first<<whp<<k.second<<ses;
        }
        for(v99 i=0;i<n;i++)cout<<vec[i]<<whp<<mpp[vec[i]]-mpp2[vec[i]]<<ses;
        cout<<ses;
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
