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
        v99 n;cin>>n;v99 a[n];
        for(v99 i=0;i<n;i++)cin>>a[i];
        v99 sa=0,sb=0,sum=0,k=0,l=0,r=n-1;
        while(l<=r)
        {
            v99 s=0;
            while(s<=sum && l<=r)
            {
                s+=a[l];
                //if(s>sum)break;
                l++;
            }sum=s;sa+=s;
            // cout<<s<<whp<<l<<whp;
            s=0;k++;
            if(l>r)break;
            while(s<=sum && l<=r)
            {
                s+=a[r];
                //if(s>sum)break;
                r--;
            }sb+=s;//cout<<s<<whp<<r<<ses;
            sum=s;
            k++;
        }cout<<k<<whp<<sa<<whp<<sb<<ses;
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
