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
    queue<v99>q;
    map<v99,v99>mpp;
    v99 n,k;cin>>n>>k;
    for(v99 i=1;i<=n;i++)
    {
        v99 x;cin>>x;
        if(mpp[x]==0)
        {
            //cout<<"YES"<<ses;
            if(q.size()==k){
                    //cout<<"NYS"<<ses;
                    v99 r=q.front();
                    mpp.erase(r);q.pop();
                }
            q.push(x);
            mpp[x]=1;
        }

        //for(auto it=mpp.begin();it!=mpp.end();++it)
        //cout<<it->first<<whp;
        //cout<<ses<<ses;

    }
    vector<v99>vec;
    while(!q.empty())
        {
            vec.push_back(q.front());
            //cout<<q.front()<<whp;
            q.pop();
        }//cout<<ses;
    cout<<vec.size()<<ses;
    for(v99 i=vec.size()-1;i>=0;i--)
        cout<<vec[i]<<whp;cout<<ses;
    return 0;
}

/// 7 2
/// 1 2 3 2 1 3 2



/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

