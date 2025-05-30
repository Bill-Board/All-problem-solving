 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}

int main()
{

    //freopen("data.out","w",stdout);
    test
    //while(1)
    {
        v99 n,a,b,c;string S,s1="";cin>>n>>a>>b>>c>>S;
        v99 r=0,p=0,s=0,koita=(n+1)/2;
        rep0(i,0,n)
        {
            if(S[i]=='R')r++;
            else if(S[i]=='S')s++;
            else p++;
            s1+='.';
        }
        //cout<<r<<whp<<p<<whp<<s<<ses;
        v99 ans=min(r,b)+min(p,c)+min(s,a);
        if(ans<koita){cout<<"NO"<<ses; continue;}
        rep0(i,0,n)
        {
            if(S[i]=='R' && b){s1[i]='P';b--;}
            else if(S[i]=='P' && c){s1[i]='S';c--;}
            else if(S[i]=='S' && a){s1[i]='R';a--;}
        }
        v99 i=0;
        while(a && i<n)
        {
            if(s1[i]=='.')s1[i]='R',a--;
            i++;
        }
        i=0;
        while(b && i<n)
        {
            if(s1[i]=='.')s1[i]='P',b--;
            i++;
        }
        i=0;
        while(c && i<n)
        {
            if(s1[i]=='.')s1[i]='S',a--;
            i++;
        }
        cout<<"YES"<<ses<<s1<<ses;

    }
    return 0;
}




/**

v99 bb=min(s,b),cc=min(r,c),aa=min(p,a);
        //cout<<aa<<whp<<bb<<whp<<cc<<ses;
        for(v99 i=0,aaa=aa;i<n && aaa;i++)
        {
            if(S[i]=='R')
            {
                s1[i]='P';
                --aaa;
            }
        }
        for(v99 i=0,bbb=bb;i<n && bbb;i++)
        {
            if(S[i]=='P')
            {
                s1[i]='S';
                --bbb;
            }
        }
        for(v99 i=0,ccc=cc;i<n && ccc;i++)
        {
            if(S[i]=='S')
            {
                s1[i]='R';
                --ccc;
            }
        }
        //cout<<aa<<whp<<bb<<whp<<cc<<ses;
        aa=a-aa;bb=b-bb;cc=c-cc;
        //cout<<aa<<whp<<bb<<whp<<cc<<ses;
        string q="";
        while(aa--)q+='R';
        while(bb--)q+='P';
        while(cc--)q+='S';

        for(v99 i=0,j=0;i<s1.size(),j<q.size();i++)
        {
            if(s1[i]=='.'){s1[i]=q[j];++j;}
        }
        cout<<"YES"<<ses<<s1<<ses;
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

