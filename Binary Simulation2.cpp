 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
#define mxi 100005
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 len,tree[4*mxi+1];
v99 query(v99 x)
{
    v99 sum=0;
    while(x>0)
    {
        sum+=tree[x];
        x-= x&-x;
    }
    return sum;
}

void update(v99 i, v99 value)
{
    while(i<=len)
    {
        tree[i]+=value;
        i+= i & -i;
    }
}

int main()
{
    //IOS
    v99 t,t1=0;cin>>t;
    while(t--)
    {
        cout<<"Case "<<++t1<<":"<<ses;
        string s;cin>>s;len=s.size();
        v99 arr[len+1];
        for(v99 i=0;i<len;i++)arr[i]=s[i]-'0';
        memset(tree,0,sizeof tree);
        v99 q;cin>>q;
        while(q--)
        {
            char c;cin>>c;
            if(c=='I')
            {
                v99 x,y;cin>>x>>y;
                update(x,1);
                update(y+1,-1);
            }
            else
            {
                v99 x;cin>>x;
                x=(arr[x-1] ^ (query(x)%2));
                cout<<x<<ses;
            }
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
