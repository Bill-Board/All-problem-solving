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
v99 lps[2*mxi];

void kmp(string txt,string pat)
{
    v99 n=txt.size(),m=pat.size(),i=0,j=0;
    while(i<n)
    {
        if(txt[i]==pat[j])
        {
            i++;j++;
            //cout<<"YES"<<i<<whp<<j<<ses;
        }
        if(j==m)
        {
            cout<<"Yes pattern matched at "<<i-j+1<<ses;
            j=lps[j-1];
        }
        else if(i<n && txt[i]!=pat[j])
        {
            if(j!=0)j=lps[j-1];
            else i++;
        }//cout<<i<<ses;
    }
}




void table(string pat)
{
    v99 len=0;
    v99 i=1;
    v99 s=pat.size();
    while(i<s)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if (len != 0) {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }//c/out<<len<<ses;
    }
}


int main()
{
    //test
    while(1)
    {
        string txt,pat;cin>>txt>>pat;
        table(pat);
        for(v99 i=0;i<pat.size();i++)cout<<lps[i]<<whp;cout<<ses;
        kmp(txt,pat);
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
