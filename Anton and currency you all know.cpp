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
    string s;cin>>s;v99 pos=-1,pos2=-1,pos3=-1;
    bool flag=false,flag1=false;
    for(v99 i=0;i<s.size()-1;i++)
    {
        if(s[i]%2==0)
        {
            pos3=i;
            if(s[i]<s[s.size()-1] && !flag1){flag1=true;pos=i;}
            if(!flag){flag=true;pos2=i;}
        }
    }
    if(flag1){swap(s[pos],s[s.size()-1]);}
    else if(flag && !flag1)
    {
        string y=s,z=s;
        swap(y[pos3],y[y.size()-1]);
        swap(z[pos2],z[z.size()-1]);
        if(y>z)s=y;
        else s=z;
    }
    else s="-1";
    cout<<s<<ses;
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
