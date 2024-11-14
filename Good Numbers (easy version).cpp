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
vector<v99>vec;
ull sum[mxi];
v99 visi[mxi];
v99 inti()
{
    sum[0]=1;
    v99 q=1;vec.push_back(1);
    for(v99 i=1;i<39;i++)
    {
        q*=3;
        vec.push_back(q);
        sum[i]=sum[i-1]+q;
    }
}

int main()
{

    inti();
    //for(auto i:vec)cout<<i<<whp;cout<<ses;
    //for(v99 i=0;i<vec.size();i++)cout<<sum[i]<<whp;cout<<ses;
    test
    //while(1)
    {
        vector<v99>vecc;
        memset(visi,0,sizeof visi);
        v99 n,nn;cin>>n;nn=n;
        while(n)
        {
            v99 pos=upper_bound(vec.begin(),vec.end(),n)-vec.begin();--pos;
            if(visi[pos])break;
            n-=vec[pos];
            visi[pos]=1;
        }
        if(!n)cout<<nn<<ses;
        else
        {
            n=nn;v99 s=0;
            while(n>0)
            {
                v99 pos=upper_bound(vec.begin(),vec.end(),n)-vec.begin();--pos;
                if(sum[pos]<n){s+=vec[pos+1];break;}
                s+=vec[pos];
                n-=vec[pos];
            }
            cout<<s<<ses;
        }
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
