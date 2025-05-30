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
#define mxi 1000005
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
v99 lps[mxi],lps2[mxi];
bool kmp(string txt,string pat)
{
    v99 n=txt.size(),m=pat.size(),i=1,j=0,q=0;bool ok=false;
    while(i<n-1)
    {
        if(txt[i]==pat[j])
        {
            i++;j++;
            //cout<<"YES"<<i<<whp<<j<<ses;
        }
        if(j==m)
        {
            //cout<<"Yes pattern matched at "<<i-j+1<<whp<<i<<ses;
            return true;
        }
        else if(i<n && txt[i]!=pat[j])
        {
            if(j!=0)j=lps2[j-1];
            else i++;
        }//cout<<i<<ses;
    }return false;
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
void table2(string pat)
{
    v99 len=0;
    v99 i=1;
    v99 s=pat.size();
    while(i<s)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps2[i]=len;
            i++;
        }
        else
        {
            if (len != 0) {
                len = lps2[len - 1];
            }
            else
            {
                lps2[i] = 0;
                i++;
            }
        }//c/out<<len<<ses;
    }
}


int main()
{
    //test
    //while(1)
    {
        string s,k;cin>>s;k=s;
        reverse(k.begin(),k.end());
        table(s);
        //table(k,lps2);
        //for(v99 i=0;i<s.size();i++)cout<<lps[i]<<whp;cout<<ses;
        //for(v99 i=0;i<k.size();i++)cout<<lps2[i]<<whp;cout<<ses;
        v99 n=lps[s.size()-1];
        //cout<<n<<ses;
        string pat="";
        for(v99 i=0;i<n;i++)pat+=s[i];
        if(pat.empty())return cout<<"Just a legend"<<ses,0;
        //cout<<pat<<ses;
        table2(pat);
        while(!pat.empty())
        {
            bool ki=true;
            for(v99 i=pat.size()-1,j=s.size()-1;i>=0;i--,j--){if(pat[i]!=s[j]){ki=false;break;}}
            bool ok=false;
            if(ki)ok=kmp(s,pat);//cout<<ok<<ses;
            if(ok){return cout<<pat<<ses,0;}
            pat.erase(pat.end()-1);
            //cout<<pat<<ses;
        }
        cout<<"Just a legend"<<ses;
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

