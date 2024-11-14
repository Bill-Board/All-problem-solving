
 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 ox8[] = {0, 0, 1, 1, 1, -1, -1, -1};
v99 oy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}

int main()
{

    //freopen("data.out","w",stdout);
    test
    //while(1)
    {
        v99 n;cin>>n;v99 a[n+1];
        rep0(i,0,n)cin>>a[i];
        vector<v99>ans,ans2;ans.push_back(a[0]);
        rep0(i,1,n-1)
        {
            if(a[i-1]<a[i] && a[i]<a[i+1])continue;
            if(a[i-1]>a[i] && a[i]>a[i+1])continue;
            ans.push_back(a[i]);
        }ans.push_back(a[n-1]);
        cout<<ans.size()<<ses;
        for(auto i:ans)cout<<i<<whp;cout<<ses;

    }
    return 0;
}




/**rep0(i,2,n-1)
        {
            if(a[i-1]<a[i])continue;
            ans.push_back(a[i-1]);
        }ans.push_back(a[n-1]);//for(auto i:ans)cout<<i<<whp;cout<<ses;
        reverse(ans.begin(),ans.end());
        //for(auto i:ans)cout<<i<<whp;cout<<ses;
        ans2.push_back(ans[0]);
        rep0(i,2,ans.size()-1)
        {
            if(ans[i-1]<ans[i])continue;
            ans2.push_back(ans[i-1]);
        }ans2.push_back(ans[ans.size()-1]);
        reverse(ans2.begin(),ans2.end());
        cout<<ans2.size()<<ses;
        for(auto i:ans2)cout<<i<<whp;cout<<ses;
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
