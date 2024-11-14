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
    v99 w;cin>>w;
    string s;cin>>s;
    map<v99,v99>mpp;
    sort(s.begin(),s.end());
    for(v99 i=0;i<w;i++)
    {
        if(s[i]=='0' || s[i]=='1')continue;
        v99 n=s[i]-'0';
        if(n==2){mpp[n]++;}
        else if(n==3){mpp[n]++;}
        else if(n==4){mpp[2]++;mpp[2]++;mpp[3]++;}
        else if(n==5)mpp[5]++;
        else if(n==6){mpp[5]++;mpp[3]++;}
        else if(n==7)mpp[7]++;
        else if(n==8){mpp[2]++;mpp[2]++;mpp[2]++;mpp[7]++;}
        else { mpp[2]++;mpp[3]++;mpp[3]++;mpp[7]++;}
    }
    for(auto it=mpp.end();it!=(mpp.begin());)
    {
        --it;//cout<< it->first  <<whp<< it->second <<ses;
        v99 q=it->second,n=it->first;
        while(q--)cout<<n;
    }cout<<ses;
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
