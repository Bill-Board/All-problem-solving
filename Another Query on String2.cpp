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
#define mxi 100002
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 tree[mxi][26],n,m;
void update(v99 i, v99 x,v99 val)
{
    while(i<=n)
    {
        tree[i][x]+=val;
        i+=i&(-i);
        //cout<<i<<ses;
    }
}

v99 query(v99 i, v99 x)
{
    v99 sum=0;
    while(i>0)
    {
        sum+=tree[i][x];
        i-=i&(-i);
        //cout<<i<<whp<<tree[i][x]<<ses;

    }
    return sum;
}
void negupdate(v99 i, v99 x)
{
    while(i<=n)
    {
        tree[i][x]--;
        i+=i&(-i);
        //cout<<i<<ses;
    }
}


int main()
{
    //test
    {
        cin>>n>>m;
        memset(tree,0,sizeof tree);
        string s;cin>>s;s='#'+s;
        for(v99 i=1;i<=n;i++)
        {
            v99 x=s[i]-'a';
            update(i,x,1);
        }
        /*for(v99 i=1;i<=n;i++)
        {
            for(v99 j=0;j<26;j++)cout<<tree[i][j]<<whp;
            cout<<ses;
        }*/
        while(m--)
        {
            char c;v99 w,l, r;cin>>w;
            if(w==1)
            {
                cin>>l>>c;
                if(s[l]==c)continue;
                update(l,s[l]-'a',-1);
                update(l,c-'a',1);
                s[l]=c;
            }
            else
            {
                cin>>l>>r>>c;--l;
                cout<<max((v99)0,query(r,c-'a'))-max((v99)0,query(l,c-'a'))<<ses;
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

