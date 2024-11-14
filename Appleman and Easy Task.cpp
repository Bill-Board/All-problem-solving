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
    v99 n;cin>>n;
    char a[n+100][n+100];
    memset(a,'0',sizeof a);
    for(v99 i=1;i<=n;i++)
    {
        for(v99 j=1;j<=n;j++)cin>>a[i][j];
    }
    for(v99 i=0;i<=n;i++)a[0][i]='0';
    for(v99 i=0;i<=n;i++)a[i][0]='0';

    for(v99 i=1;i<=n;i++)
    {
        v99 sum=0;
        for(v99 j=1;j<=n;j++)
        {
            if(a[i-1][j]=='o' && i>1){sum++;}
            if(a[i+1][j]=='o' && i<n){sum++;}
            if(a[i][j-1]=='o' && j>1){sum++;}
            if(a[i][j+1]=='o' && j<n){sum++;}
            //cout<<sum<<ses;
            if(sum%2){return cout<<"NO"<<ses,0;}
        }

    }
    cout<<"YES\n";
    return 0;
}




/**if(a[i][j]=='o' && a[i][j-1]=='x'){
                    sum++;cout<<"["<<i<<whp<<j<<ses;
                    }
            else if(j==1 && a[i][j]=='o' && a[i][j+1]=='x' && a[i][j+2]=='x'){sum++;
            cout<<"q"<<i<<whp<<j<<ses;}
            if(j==n && a[i][j-1]=='o' && a[i][j]=='x'){sum++;
            cout<<"w"<<i<<whp<<j<<ses;}

       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

