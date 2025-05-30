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
#define mxi 1000003
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
v99 arr[mxi],visi[mxi];
pair<v99,v99>vpp[mxi];
v99 inti(v99 n)
{
    v99 i=n,sc=0,fs=0;;
    while(arr[i]!=0 && i>0)i--;fs=i;--i;
    while(arr[i]!=0 && i>0)i--;sc=i;

    return sc;
}








int main()
{
    test
    //while(1)
    {
        v99 n,l=1,r,one=0,crush_=0;cin>>n;CLR(vpp,0);
        rep1(i,1,n)cin>>arr[i];
        rep1(i,1,n){if(arr[i]==1)one++;}
        if(one==1){cout<<-1<<ses;continue;}one=inti(n);
        while(arr[l]!=1 && l<=n)l++;r=l;
        vpp[l].first=INF;v99 z=1;
        for(v99 i=l+1;i<=n;i++)
        {
            while(arr[i]!=1 && i<=n){i++;z++;}
            vpp[r].second=z;
            vpp[i].first=z;
            r=i;z=1;
        }
        l=n;
        while(arr[l]!=1 && l>0)l--;vpp[l].second=INF;
        rep1(i,1,n)cout<<vpp[i].first<<whp<<vpp[i].second<<ses;cout<<"yesno "<<one<<ses;
        rep1(i,1,n)
        {
            if(arr[i]==1)
            {
                if(one==i)
                {
                    crush_+=vpp[i].second;break;
                }
                v99 age=vpp[i].first;
                v99 pore=vpp[i].second;
                if(pore==INF){crush_+=age;break;}
                if(pore<=age)
                {
                    crush_+=pore;
                    arr[i+pore]++;arr[i]=0;
                }
                else
                {
                    crush_+=age;
                    arr[i-age]++;arr[i]=0;
                    vpp[i+pore].first+=pore;
                }--one;
                rep1(k,1,n)cout<<arr[k]<<whp;cout<<ses;cout<<crush_<<ses;
            }
        }cout<<crush_<<ses;



    }
    return 0;
}




/**

            koita=l-r;r=l+1;
            while(arr[r]!=1)r++;
            samne=r-l;
            if(koita<samne)
            {
                crush_+=(koita);
                arr[l]=0;
            }
            else
            {
                crush_+=samne;
                arr[r]++;

            }
            koita=0;
            l=r;r++;
       Alhamdulillah...   😘😘😘😘😍😍😍😍
                             😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

