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
#define mxi 999999999
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
    IOS
    v99 t;cin>>t;
    while(t--)
    {
        v99 n,x=0,y=0;
        cin>>n;string s;cin>>s;
        map<pair<v99,v99>,v99>mpp;
        mpp[{0,0}]=0;
        bool flag=false;
        v99 low=mxi,p,q;
        for(v99 i=0;i<n;i++)
        {
            char c=s[i];
            if(c=='L')x--;
            else if(c=='R')x++;
            else if(c=='U')y++;
            else y--;
            if(mpp.count({x,y})==0){mpp[{x,y}]=i+1;}
            else{
               //cout<<mpp[{x,y}]+1<<whp<<i+1<<"  yes"<<ses;
                v99 dif=abs(mpp[{x,y}]+1-i-1);
                if(dif<low){low=dif;p=mpp[{x,y}]+1;q=i+1;}
               // cout<<"dif  "<<dif<<"  low  "<<low<<ses;
                mpp[{x,y}]=i+1;
                flag=true;}
            //for(auto it=mpp.begin();it!=mpp.end();++it)
              //  cout<<(it->first).first<<whp<<(it->first).second<<whp<<it->second<<ses;
                //cout<<ses<<ses;
        }
        if(flag){cout<<p<<whp<<q<<ses;continue;}
        cout<<-1<<ses;
    }
    return 0;
}




/**    RURDLUDLL
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
