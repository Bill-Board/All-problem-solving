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
string s;
int tree[mx*3];
void init (int node , int b, int e)
{
    //tree[node]=0;
    if(b==e){tree[node]=arr[b];return;}
    int left=node*2;
    int right = node*2 +1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[right],tree[left]);
}

int queri(int node,int b, int e, int i, int j)
{
    if(i>e || j<b)return 99999;/// baire.
    if(i<=b && e<=j)return tree[node];/// ekkebare moddhe.
    int left=node*2;
    int right=node*2 +1;
    int mid=(b+e)/2;
    int p1=queri(left,b,mid,i,j);
    int p2=queri(right,mid+1,e,i,j);
    return min(p1,p2);
}
int main()
{
    //test
    {
        v99 n,m;
        cin>>n>>m>>s;

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
