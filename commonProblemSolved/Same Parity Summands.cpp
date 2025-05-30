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

int main()
{
    test
    //while(1)
    {
        v99 n,k;cin>>n>>k;
        v99 jor=(k-1)*2,bjor=k-1;
        if((((n-jor)%2==0)&& n-jor>0))
        {
            cout<<"YES"<<ses;
            k--;
            while(k--)cout<<2<<whp;
            cout<<n-jor<<ses;
        }
        else if((n-bjor)&1 && (n-bjor)>0)
        {
            cout<<"YES"<<ses;
            k--;
            while(k--)cout<<1<<whp;
            cout<<n-bjor<<ses;
        }
        else cout<<"NO"<<ses;
    }
    return 0;
}




/**

        cout<<"YES"<<ses;
        if(n&1 && k&1)
        {
            v99 j=k-1;n-=j;
            while(j--)cout<<1<<whp;
            cout<<n<<ses;
        }
        else if(n%2==0 && k&1)
        {
            v99 j=k-1;n=n-2*j;
            while(j--)cout<<2<<whp;
            cout<<n<<ses;
        }
        else if(n%2==0 && k%2==0)
        {
            v99 j=k-1,nn=n-j;
            if(j+nn==n)
            {
                while(j--)cout<<1<<whp;
                cout<<nn<<ses;
            }
            else
            {
                while(j--)cout<<2<<whp;
                cout<<n-2*j<<ses;
            }
        }
        else cout<<"NO"<<ses;
    }
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

