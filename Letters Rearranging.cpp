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


bool pali(string s)
{
    v99 i, j;
        for(i=0,j=s.size()-1;i<(s.size()/2);i++,j--)
        {
            if(s[i]!=s[j]){return false;}
        }

    return true;
}

int main()
{
    test
    //while(1)
    {
        string s;cin>>s;bool ok=true;
        for(v99 i=0;i<s.size();i++)
        {if(s[0]!=s[i])ok=false;}
        if(ok){cout<<-1<<ses;continue;}
        if(!pali(s))cout<<s<<ses;
        else
        {
            for(v99 i=0;i<s.size()-1;i++)
            {
                if(s[i]!=s[i+1]){swap(s[i],s[i+1]);break;}
            }
            cout<<s<<ses;
        }
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

