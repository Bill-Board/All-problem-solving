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
#define mxi 500001
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a) memset(a,0,sizeof(a));
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}
v99 lps[mxi];
void table(string pat,v99 *lps)
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
v99 kmp(string txt,string pat)
{
    memset(lps,0,pat.size());
    table(pat,lps);
    v99 n=txt.size(),m=pat.size(),i=0,j=0,ans=0;
    while(i<n)
    {
        if(txt[i]==pat[j])
        {
            i++;j++;
            //cout<<"YES"<<i<<whp<<j<<ses;
        }
        if(j==m)
        {
            return j;
        }
        else if(i<n && txt[i]!=pat[j])
        {
            if(j!=0)j=lps[j-1];
            else i++;
        }//cout<<i<<ses;
        ans=max(j,ans);
    }return ans;
}


int main()
{
    //test
    //while(1)
    {
        v99 n;cin>>n;string ans="";
        vector<string>v;
        rep0(i,0,n)
        {
            string s;cin>>s;
            v.push_back(s);
        }
        ans+=v[0];//cout<<ans<<ses;
        rep0(i,1,n)
        //for(auto i:mpp)
        {
            string s=v[i];
            //string s=i.first;cout<<s<<ses;
            //cout<<ans<<whp<<s<<ses;
            v99 j=kmp(ans,s);//cout<<j<<ses;
            for(v99 k=j+1;k<s.size();k++)ans+=s[k];
            //cout<<ans<<ses;
        }
        cout<<ans.size()<<ses;

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

