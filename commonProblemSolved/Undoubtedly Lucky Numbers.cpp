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
void sum(v99 n,vector<v99>&mpp)
{
    queue<string>q;v99 j=1;
    for(char i='1';i<='9';i++){string s="";s+=i;q.push(s);}
    while(1)
    {
        string s=q.front();q.pop();
        v99 ans=stoi(s);mpp.push_back(ans);
        map<char,v99>mpp2;
        for(v99 i=0;i<s.size();i++)mpp2[s[i]]++;
        if(mpp2.size()==1)
        {
            for(char i='0';i<='9';i++)
            {
                string ss=s+i;q.push(ss);
            }
        }
        else if(mpp2.size()==2)
        {
            auto it=mpp2.begin();char c=it->first;++it;
            char cc=it->first;
            string ss=s+c;q.push(ss);ss=s+cc;q.push(ss);
        }
        if(ans>n)break;
    }
}
int main()
{
    //test
    //while(1)
    {
        v99 n;cin>>n;vector<v99>vec;
        sum(n,vec);
        //for(auto i:vec)cout<<i<<ses;
        v99 pos=upper_bound(vec.begin(),vec.end(),n)-vec.begin();
        cout<<pos<<ses;
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

