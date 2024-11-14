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
vector<pair<char,v99>>a;
int main()
{
    v99 n,clo=0,opn=0,k=0;cin>>n;string s;
    cin>>s;s='#'+s;
    for(v99 i=0;i<s.size();i++){//a.push_back(make_pair(s[i],i));
            if(s[i]=='(')clo++;}
    if(n%2!=0 || 2*clo!=n)return cout<<-1<<ses,0;
    bool flgcl=false,ki=false;opn=0;clo=0;
    v99 ind=0;
    for(v99 i=1;i<s.size();i++)
    {
        if(s[i]=='(')opn++;
        else opn--;
        if(opn==-1 && !ki){ind=i;ki=true;}
        if(flgcl && opn==0)
        {k+=(i-ind+1);ki=false;}
        else if(opn<0){flgcl=true;}
        else if(opn>0)flgcl=false;

        //cout<<opn<<ses;
    }
    cout<<k<<ses;
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
