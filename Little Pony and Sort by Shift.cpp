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
        v99 n;cin>>n;
        vector<v99>ans,ans2;
        v99 pos=0,i=0,a[n];for(v99 i=0;i<n;i++)cin>>a[i];
        bool ok=false;
        while(i<n-1)
        {
            ans.push_back(a[i]);
            if(a[i]>a[i+1]){ok=true;break;}
            i++;
        }
        if(!ok)return cout<<0<<ses,0;
        v99 j=n-1;//cout<<i<<ses;
        reverse(ans.begin(),ans.end());
        while(j>i)
        {
            ans.push_back(a[j]);
            j--;
        }
        reverse(ans.begin(),ans.end());
        sort(a,a+n);
        //for(auto x:ans)cout<<x<<whp;cout<<ses;
        for(v99 k=0;k<n;k++)
        {
            if(a[k]!=ans[k])return cout<<-1<<ses,0;
        }
        cout<<n-i-1<<ses;
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
