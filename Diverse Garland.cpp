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
#define CLR(a) memset(a,0,sizeof a)
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
int main()
{
    //test
    //while(1)
    {
        v99 n,q=0;string s;
        cin>>n>>s;s='1'+s+'1';
        for(v99 i=2;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                if(s[i]==s[i+1])
                {
                    if(s[i]=='R')s[i]='B',q++;
                    else if(s[i]=='G')s[i]='B',q++;
                    else if(s[i]=='B')s[i]='G',q++;
                    i++;
                }
                else
                {
                    if((s[i]=='R' && s[i+1]=='G') ||(s[i]=='G' && s[i+1]=='R')) s[i]='B',q++;
                    else if((s[i]=='B' && s[i+1]=='G') ||(s[i]=='G' && s[i+1]=='B')) s[i]='R',q++;
                    else if((s[i]=='B' && s[i+1]=='R') ||(s[i]=='R' && s[i+1]=='B')) s[i]='G',q++;
                    i++;
                }

            }
            /*else if(s[i]==s[i+1])
            {
                if((s[i]=='R' && s[i-1]=='G') ||(s[i]=='G' && s[i-1]=='R')) s[i]='B',q++;
                else if((s[i]=='B' && s[i-1]=='G') ||(s[i]=='G' && s[i-1]=='B')) s[i]='R',q++;
                else if((s[i]=='B' && s[i-1]=='R') ||(s[i]=='R' && s[i-1]=='B')) s[i]='G',q++;
                i++;
            }*/
        }
        if(s[n]==s[n-1]){q++;
        if(s[n-1]=='B' ||s[n-1]=='G')s[n]='R';
        else s[n]='B';
        }
        cout<<q<<ses;
        s.erase(s.end()-1);s.erase(s.begin());
        cout<<s<<ses;
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

