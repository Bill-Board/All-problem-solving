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
#define CLR(a) memset(a,0,sizeof a)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 a[mxi];
v99 pw(v99 a, v99 b)
{
	v99 ans = 1;
	for(v99 i = 1; i <= b; ++i)
		ans = (ans * a);
	return ans;
}


struct Person {

    v99 val;
    v99 lll;v99 rrr;
    Person(v99 val,v99 lll, v99 rrr)
        : val(val) , lll(lll), rrr(rrr)
    {
    }
};
struct CompareHeight {
    bool operator()(Person const& p1, Person const& p2)
    {
        if(p1.val==p2.val)
        return p1.lll > p2.rrr;
        else return p1.val<p2.val;
    }
};


void bfs(v99 n)
{
    priority_queue<Person, vector<Person>, CompareHeight>q;
    q.push(Person(n,(v99)1,n));v99 vall=1;
    while(!q.empty())
    {
        Person p=q.top();
        v99 l=p.lll ,r=p.rrr;q.pop();
        if(l>n || r<1)break;
        if((r-l+1)&1)
        {
            v99 mid=(l+r)/2;
            a[mid]=vall;
            if(l<=n && (mid-1)>0)q.push(Person(mid-l,l,mid-1));
            if((mid+1)<=n && r>0)q.push(Person(r-mid,mid+1,r));
        }
        else
        {
            v99 mid=(l+r-1)/2;
            a[mid]=vall;
            if((mid+1)<=n && r>0)q.push(Person(r-mid,mid+1,r));
            if(l<=n && (mid-1)>0)q.push(Person(mid-l,l,mid-1));
        }
        if(vall==n)break;
        ++vall;
    }
}





int main()
{
    test
    //while(1)
    {
        v99 n;cin>>n;CLR(a);
        bfs(n);
        for(v99 i=1;i<=n;i++)
        {
            cout<<a[i]<<whp;
        }cout<<ses;
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

