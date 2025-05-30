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
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a) memset(a,0,sizeof(a));
#define PI acos(-1)
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
    //test
    //while(1)
    {
        v99 n,x;cin>>n>>x;vector<v99>tom,a;
        rep0(i,0,n)
        {
            v99 ogy;cin>>ogy;a.push_back(ogy);
            ogy=((ogy+1)*ogy)/2;
            tom.push_back(ogy);
        }
        rep0(i,0,n)
        {
            v99 ogy=a[i];a.push_back(ogy);
            ogy=((ogy+1)*ogy)/2;
            tom.push_back(ogy);
        }
        //for(auto i:tom)cout<<i<<whp;cout<<ses;
        //for(auto i:a)cout<<i<<whp;cout<<ses;
        v99 l=0,jabo_na=10,r=0,koita=0,val=0,crush=0;
        while(r!=2*n)
        {
            v99 tmp=0;
            val+=tom[r];
            koita+=a[r];r++;
            if(koita>x)
            {
                tmp=0;
                while(koita>x && l<r)
                {
                    //if(l==4)cout<<l<<whp<<r<<ses;
                    if(koita-a[l]<=x)
                    {
                        v99 hh=a[l];
                        v99 age=koita-x;
                        tmp=max((v99)0,tom[l]-((age*(age+1))/2));
                        //cout<<"oke "<<tmp<<whp<<age<<whp<<tom[l]<<ses;
                    }
                        val-=tom[l];
                        koita-=a[l];
                        l++;
                }
                //cout<<l<<whp<<whp<<r<<whp<<val<<ses;
                crush=max(val+tmp,crush);
            }
            crush=max(val+tmp,crush);
            //cout<<crush<<ses;
        }
        cout<<crush<<ses;
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

