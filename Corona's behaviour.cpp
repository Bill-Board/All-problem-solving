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

    v99 k=1;
    test
    //while(1)
    {
        v99 x;cin>>x;bool ok=false;
        //x=abs(x);
        if(x==0){cout<<"Case "<<k++<<": "<<0<<ses;continue;}
        if(x==1){cout<<"Case "<<k++<<": "<<1<<ses;continue;}
        if(x>0){v99 xx=x;
        for(v99 i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                v99 ans=0;
                while(x%i==0)
                {
                    //cout<<x<<ses;
                    x=x/i;ans++;
                }
                if(x==1){ cout<<"Case "<<k++<<": "<<ans<<ses;ok=true;break;}
                x=xx;
            }
        }
        if(!ok)cout<<"Case "<<k++<<": "<<1<<ses;
        }


        else
        {
            x=abs(x);ok=false;v99 xx=x;
            for(v99 i=2;i*i<=x;i++)
            {
                if(x%i==0)
                {
                    v99 ans=0;
                    while(x%i==0)
                    {
                        //cout<<x<<ses;
                        x=x/i;ans++;
                    }
                    if(ans&1 && x==1){ok=true;cout<<"Case "<<k++<<": "<<ans<<ses;break;}
                    x=xx;
                }
            }
        if(!ok)cout<<"Case "<<k++<<": "<<1<<ses;}
        /*
        if(x<2)cout<<"Case "<<k++<<": "<<0<<ses;
        else if(mpp[x])cout<<"Case "<<k++<<": "<<mpp[x]<<ses;
        else
        {
            v99 n=0;
            while(!mpp[x]){x-=x&-x;n++;}
            cout<<"Case "<<k++<<": "<<n<<ses;
        }*/
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
