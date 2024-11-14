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
#define mxi 1e19
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
v99 bina(vector<v99>sum,v99 n,v99 val)
{
    v99 l=0,h=n-1,mid,pos=0;
    while(l<=h)
    {
        mid=(h-l)/2+l;
        if(sum[mid]==val)return mid;
        else if(sum[mid]<val)
        {
            l=mid+1;
            pos=mid;
        }
        else h=mid-1;
    }return pos;
}


int main()
{
    //test
    //while(1)
    {
        v99 r,g,b;cin>>r>>g>>b;
        vector<v99>p,q,w;
        for(v99 i=0;i<r;i++)
        {v99 x;cin>>x;p.push_back(x);}
        for(v99 i=0;i<g;i++)
        {v99 x;cin>>x;q.push_back(x);}
        for(v99 i=0;i<b;i++)
        {v99 x;cin>>x;w.push_back(x);}
        sort(p.begin(),p.end());sort(q.begin(),q.end());
        sort(w.begin(),w.end());ull ans=mxi;
        for(v99 i=0;i<p.size();i++)
        {
            //auto x=upper_bound(q.begin(),q.end(),p[i])-q.begin();
            auto it=upper_bound(q.begin(),q.end(),p[i])-q.begin();
            v99 pos=it;v99 pos2;
            if(pos==0 || pos2==q.size()-1)pos2=pos;
            else pos2=pos-1;
            if(q[pos]==p[i])pos2=pos;
            cout<<pos<<whp<<pos2<<ses;
            v99 one=q[pos],sec=q[pos2];
            auto it2=upper_bound(w.begin(),w.end(),one)-w.begin();
            v99 eee=it2;
            v99 eee2;
            if(eee==0 || eee==w.size()-1)eee2=eee;
            else eee2=eee-1;
            auto it3=upper_bound(w.begin(),w.end(),sec)-w.begin();
            v99 eee3=it3;
            v99 eee4;
            if(eee3==0 || eee3==w.size()-1)eee4=eee3;
            else eee4=eee3-1;
            cout<<one<<whp<<sec<<ses;
            cout<<eee<<whp<<eee2<<ses;
            cout<<eee3<<whp<<eee4<<ses;

            ull ek=((p[i]-one)*(p[i]-one))+((one-w[eee])*(one-w[eee]))+((p[i]-w[eee])*(p[i]-w[eee]));
            ull dui=((p[i]-one)*(p[i]-one))+((one-w[eee2])*(one-w[eee2]))+((p[i]-w[eee2])*(p[i]-w[eee2]));
            ull thr=((p[i]-sec)*(p[i]-sec))+((sec-w[eee3])*(sec-w[eee3]))+((p[i]-w[eee3])*(p[i]-w[eee3]));
            ull four=((p[i]-sec)*(p[i]-sec))+((sec-w[eee4])*(sec-w[eee4]))+((p[i]-w[eee4])*(p[i]-w[eee4]));
            cout<<ek<<whp<<dui<<whp<<thr<<whp<<four<<ses;
            ans=min(ans,min(ek,min(dui,min(thr,four))));


        }cout<<ans<<ses;

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

