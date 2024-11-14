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

int result(int num)
{
        string s="";
        int n=num;
        while(n)
        {
            int nn=n%10;
            char cc=nn+'0';
            s+=cc;
            n=n/10;
        }
        reverse(s.begin(),s.end());
        //cout<<s<<ses;
        string ss=s;
        char c='9';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='9'){c=s[i];break;}
        }
        for(int i=0;i<s.size();i++)
        {
            if(ss[i]==c)ss[i]='9';
        }
        int ans2,ans=stoi(ss);
        bool ok=true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=s[0]){ok=false;break;}
        }
        if(ok)
        {
            string sss="";
            for(int i=0;i<s.size();i++)sss+='1';
            ans2=stoi(sss);
        }
        else
        {
            ss=s;c='1';
            for(int i=0;i<s.size();i++)
            {
                if(ss[i]!='1' && s[i]!='0'){char d=ss[i];
                    if(i!=0)
                    {
                        for(int j=0;j<s.size();j++)
                        {
                            if(d==ss[j])ss[j]='0';
                        }
                    }
                    else
                    {
                        for(int j=0;j<s.size();j++)
                        {
                            if(d==ss[j])ss[j]='1';
                        }
                    }break;
                 }
            }
            ans2=stoi(ss);

        }
        //cout<<ans<<whp<<ans2<<ses;
        return ans-ans2;
    }


int main()
{
    //test
    //while(1)
    {
        int n;cin>>n;
        cout<<result(n)<<ses;
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
