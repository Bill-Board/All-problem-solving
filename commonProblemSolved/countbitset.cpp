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

v99 countbit(v99 n)
{
    v99 count=0;
    while(n)
    {
        count++;
        n-=n&(-n);
        cout<<n<<ses;
    }
    return count;
}
v99 getibit(v99 n, v99 i)
{
     v99 q=n>>i;cout<<q<<ses;
    return (q&1)?1:0;
}
v99 setibit(v99 n, v99 i)
{
    return n|(1<<i);
}
v99 clearbit(v99 n, v99 i)
{
    return n-=n&(1<<i);
}
void subseq(string s,v99 n)
{
    v99 i=0;
    while(n)
    {
        (n&1)?cout<<s[i]:cout<<"";
        ++i;
        n=n>>1;
    }cout<<ses;
}



int main()
{
    //test
        {
        //v99 n;cin>>n;
        //v99 a[n];
        //for(v99 i=0;i<n;i++){cin>>a[i];cout<<clearbit(a[i],2)<<ses;}
        //for(v99 i=0;i<n;i++)cout<<a[i]<<whp;
        //cout<<ses;

        string s;cin>>s;
        v99 r=(1<<(s.size()))-1;cout<<r<<ses;
        for(v99 i=0;i<=r;i++)
            subseq(s,i);
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
