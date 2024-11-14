
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
vector<v99>v[10000];
map<v99,v99>level;

void bfs(v99 ind)
{
    queue<v99>q;q.push(ind);level[ind]=1;
    while(!q.empty())
    {
        v99 x=q.front();q.pop();
        for(auto i:v[x])
        {
            if(level[i]==0)
            {
                q.push(i);
                level[i]=level[x]+1;
            }
        }
    }
}






int main()
{
    //test
    //while(1)
    {
        map < string, v99 > mymap;
        v99 n,q=1;cin>>n;
        for (v99 i = 0; i < n; i++)
        {
            string s1, s2, s3;
            cin >> s1 >> s2 >> s3;
            transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
            transform(s3.begin(), s3.end(), s3.begin(), ::tolower);
            if (mymap.find(s1) == mymap.end())
            {
                //printf("Mapping %s with %d\n", s1, assign);
                mymap[s1] = q++;
            }
            if (mymap.find(s3) == mymap.end())
            {
                //printf("Mapping %s with %d\n", s2, assign);
                mymap[s3] = q++;
            }
            v99 x = mymap[s1];
            v99 y = mymap[s3];
            v[x].push_back(y);
            v[y].push_back(x);
        }
        bfs(mymap["polycarp"]);
        v99 crush=0;
        for(auto i:level)
            crush=max(crush,i.second);
        cout<<crush<<ses;
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

