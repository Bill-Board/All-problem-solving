#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 100000000
bool a[M];
void segmentsieve(ll a,ll b)
{
ll n=b-a+1;

    ll c=sqrt(b);
     bool arrayy[c];
     arrayy[0]=true;
     arrayy[1]=true;
     for(int k=4;k<=c;k+=2)
     {
         arrayy[k]=true;
     }
     for(int d=3;d*d<=c;d+=2)
     {
         for(int e=d*d;e<=c;e+=d*2)
         {
             arrayy[e]=true;
         }
     }
    // cout<<c<<endl;
     for(int f=0;f<=c;f++)
     {
         if(arrayy[f]==false)
         {
            //cout<<f<<endl;
            vec1.push_back(f);
         }
     }
     cout<<vec1.size()<<endl;
   bool aa[n];
     for(int l=0;l<vec1.size();l++)
     {
         int currentPrime=vec1[l];
         int base=(a/currentPrime)*currentPrime;
         if(base<a) base=base+currentPrime;
         if(base==currentPrime) base=base-l;
         for(int t=base;t<=b;t+=currentPrime)
         {
             aa[t-a]=true;
             //cout<<t-a<<endl;
         }
     }
     for(int s=0;s<n;s++)
         {
           if(aa[s]==false)
            cout<<a+s<<endl;
         }
}
int main()
{
    ll x,y;
    scanf(“%lld %lld”,&x,&y);
    segmentsieve(x,y);
}
