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
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
string s;v99 k;
string substring(v99 l)
{
    v99 ind=0;string q="";
    while(l)
    {
        if(l&1)q+=s[ind];
        l=l>>1;
        ind++;
        cout<<"yes"<<ses;
    }
    //cout<<q<<ses;

    return q;
}


int main()
{
    //test
    //while(cin>>s>>k)
    {
        cin>>s>>k;
        sort(s.begin(),s.end());
        map<string,v99>mpp;
        v99 len=s.size();len=(1<<len);
        cout<<len<<ses;
        for(v99 i=1;i<len;i++)
        {
            string q=substring(i);
            if(q.size()==k)mpp[q]++;
        }
        for(auto i:mpp)cout<<i.first<<ses;
        mpp.clear();
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
