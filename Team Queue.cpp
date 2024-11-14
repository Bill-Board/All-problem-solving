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
#define mxi 1000010
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
string en="ENQUEUE",de="DEQUEUE",st="STOP";
queue<v99>ee,q[mxi];
v99 num[mxi];
void init(v99 n)
{
    CLR(num);
    for(v99 i=0;i<=n;i++)
    {
        while(!q[i].empty())q[i].pop();
    }
    while(!ee.empty())ee.pop();
}

void input(v99 n)
{
    for(v99 i=1;i<=n;i++)
         {
             v99 nn;cin>>nn;
             while(nn--)
             {
                 v99 x;cin>>x;
                 num[x]=i;
             }
         }
}

int main()
{
    //test
    v99 n,k=0;
    while(1)
    {
         cin>>n;if(!n)return 0;
         init(n);
         input(n);
         cout<<"Scenario #"<<++k<<ses;
         while(1)
         {
             string s;cin>>s;
             if(s==st)break;
             if(s==en)
             {
                 v99 k;cin>>k;
                 v99 koi=num[k];
                 if(q[koi].empty()) ee.push(koi);
                 q[koi].push(k);
             }
             if(s==de)
             {
                 v99 x=ee.front();
                 cout<<q[x].front()<<ses;
                 q[x].pop();
                 if(q[x].empty())ee.pop();
             }
         }cout<<ses;
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
