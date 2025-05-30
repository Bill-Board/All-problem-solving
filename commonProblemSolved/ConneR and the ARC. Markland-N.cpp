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

    v99 t;cin>>t;
    while(t--)
    {
        v99 n,s,k;cin>>n>>s>>k;
        map<v99,v99>visited;
        for(v99 i=0;i<k;i++)
        {
            v99 x;cin>>x;
            visited[x]=1;
        }v99 ans=0; bool a1=false,b1=false;
        //for(v99 i=1;i<=k;i++)cout<<visited[i]<<whp;cout<<ses;


        if(visited[s]==0){cout<<0<<ses;}
        else
        {
            if(s!=n)
            {
                for(v99 i=s+1;i<=n;i++)
                {
                    ans++;
                    if(visited[i]==0)
                    {
                        a1=true;
                        break;
                    }
                }
            }//cout<<ans<<ses;
            v99 ans2=0;
            if(s!=1)
            {
                for(v99 i=s-1;i>=1;i--)
                {
                    ans2++;
                    if(visited[i]==0)
                    {
                        b1=true;
                        if(a1)cout<<min(ans,ans2)<<ses;
                        else cout<<ans2<<ses;break;
                    }
                }
            }
            if(a1 && !b1)cout<<ans<<ses;
            else if(!a1 && !b1)cout<<0<<ses;
        }visited.clear();
    }
    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

