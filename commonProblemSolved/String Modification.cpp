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
    IOS
    v99 t;cin>>t;
    while(t--)
    {
        v99 n,pos=1;cin>>n;string s,r;
        cin>>s;r=s;
        map<pair<string,v99>,v99>mpp;
        mpp[{s,1}]++;
        for(v99 i=1;i<n-1;i++)
        {
            string q=s,w="";v99 loop=n-i;
            //cout<<"loop "<<loop<<ses;
            for(v99 j=i;j<n;j++)w+=q[j];
            if(loop%2==0)
                for(v99 j=0;j<i;j++)w+=q[j];
            else
                for(v99 j=i-1;j>=0;j--)w+=q[j];
            //cout<<"w "<<w<<ses;
            mpp[{w,i+1}]=1;
            //if(r>w){
                //cout<<"yes "<<r<<ses;
                    //pos=i+1;r=w;}
        }//cout<<"ki"<<ses;
        string w=s;reverse(w.begin(),w.end());
        //cout<<w<<ses;
        mpp[{w,n}]++;
        //if(r>w){pos=n;r=w;}
        auto it=mpp.begin();
        pair<string,v99>pi=it->first;
        cout<<pi.first<<ses<<pi.second<<ses;
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
