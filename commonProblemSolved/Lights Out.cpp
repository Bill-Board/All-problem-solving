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
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    //test
    {
        v99 a[4],b[4];memset(b,0,sizeof b);
        v99 tree[3][3],ans[3][3];
        for(v99 i=0;i<3;i++)
        {
            for(v99 j=0;j<3;j++)
            {
                cin>>tree[i][j];
            }
        }
        for(v99 i=0;i<3;i++)
        {
            for(v99 j=0;j<3;j++)
            {
                v99 sum=tree[i][j];
                if(j+1<3)sum+=tree[i][j+1];
                if(j-1>=0)sum+=tree[i][j-1];
                if(i+1<3)sum+=tree[i+1][j];
                if(i-1>=0)sum+=tree[i-1][j];
                ans[i][j]=sum;
            }
        }

        for(v99 i=0;i<3;i++)
        {
            for(v99 j=0;j<3;j++)
            {
                v99 sum=ans[i][j];
                if(sum&1)cout<<0;
                else cout<<1;
            }cout<<endl;
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

