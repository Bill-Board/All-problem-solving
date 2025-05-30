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
    //test
    {
        v99 n,m,sum=0;cin>>n>>m;v99 tree[2*mxi],ans[n+1];
        memset(tree,0,sizeof tree);
        vector<pair<v99,v99> >a;
        for(v99 i=0;i<m;i++){v99 x;cin>>x;sum+=x;a.push_back(make_pair(x,i));}
        if(sum<n)return cout<<-1<<ses,0;
        //for(v99 i=0;i<n;i++){}
        for (int i = 0; i < m; i++) {
        if (i + a[i].first  > n) {
            puts("-1");
            return 0;
        }}
        sort(a.begin(),a.end());reverse(a.begin(),a.end());
        v99 beg=1,x,range;
        for(v99 i=0;i<m;i++)
        {
            x=a[i].first;
            range=n-x+1;
            beg=min(range,beg);
            //cout<<"beg "<<beg<<ses;
            v99 sesss=beg+x-1;
            tree[beg]+=1;
            tree[sesss+1]-=1;
            ans[a[i].second]=beg;
            v99 baki=sum-x;
            beg=max((v99)0,n-baki+1);
            //beg=min(n,beg+x);
            //cout<<beg<<ses;
            sum-=x;
        }
        for(v99 i=1;i<=n;i++)tree[i]+=tree[i-1];
        for(v99 i=1;i<=n;i++){if(tree[i]==0){cout<<-1<<ses;return 0;}}
        for(v99 i=0;i<m;i++)cout<<ans[i]<<whp;cout<<ses;
    }
    return 0;
}




/**
v99 n,m,sum=0;cin>>n>>m;
        v99 a[m+1],tree[2*mxi];for(v99 i=0;i<m;i++)cin>>a[i],sum+=a[i];
        memset(tree,0,sizeof tree);
        if(sum<n){puts("-1");return 0;}
        for(v99 i=0;i<m;i++)
        {
            v99 range=n-a[i]+1;
            tree[1]+=1;
            tree[range+1]-=1;
        }
        for(v99 i=0;i<=n;i++)tree[i]+=tree[i-1];
        for(v99 i=1;i<=n;i++)cout<<tree[i]<<whp;cout<<ses;

v99 n,m;cin>>n>>m;v99 tree[2*mxi],ans[n+1];
        memset(tree,0,sizeof tree);
        vector<pair<v99,v99> >a;
        for(v99 i=0;i<m;i++){v99 x;cin>>x;a.push_back(make_pair(x,i));}
        sort(a.begin(),a.end());reverse(a.begin(),a.end());
        v99 beg=1,x,range;
        for(v99 i=0;i<m;i++)
        {
            v99 baki=n-i-1;
            x=a[i].first;
            range=n-x+1;
            beg=min(range,beg);
            //cout<<"beg "<<beg<<ses;
            v99 sesss=beg+x-1;
            tree[beg]+=1;
            tree[sesss+1]-=1;
            ans[a[i].second]=beg;
            beg=min(n,beg+x);\
            //cout<<beg<<ses;
        }
        for(v99 i=1;i<=n;i++)tree[i]+=tree[i-1];
        for(v99 i=1;i<=n;i++){if(tree[i]==0){cout<<-1<<ses;return 0;}}
        for(v99 i=0;i<m;i++)cout<<ans[i]<<whp;cout<<ses;


       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
