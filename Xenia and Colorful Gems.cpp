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
            pos=mid+1;
        }
        else h=mid-1;
    }return pos;
}


int main()
{
    test
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
            v99 pos=min((v99)q.size()-1, bina(q,q.size(),p[i]));
            v99 pos2=max((v99)0,pos-1);
            v99 pos3=min((v99)q.size()-1,pos+1);

            v99 one=q[pos],sec=q[pos2],theddd=q[pos3];
            v99 eee=min((v99)w.size()-1, bina(w,w.size(),one));
            v99 eee2=max((v99)0,eee-1);
            if(w[eee]==one)eee2=eee;
            v99 eee3=min((v99)w.size()-1, bina(w,w.size(),sec));
            v99 eee4=max((v99)0,eee-1);
            if(w[eee3]==sec)eee4=eee3;
            v99 eee5=min((v99)w.size()-1, bina(w,w.size(),theddd));
            v99 eee6=max((v99)0,eee5-1);
            if(w[eee5]==theddd)eee5=eee6;

            ull ek=((p[i]-one)*(p[i]-one))+((one-w[eee])*(one-w[eee]))+((p[i]-w[eee])*(p[i]-w[eee]));
            ull dui=((p[i]-one)*(p[i]-one))+((one-w[eee2])*(one-w[eee2]))+((p[i]-w[eee2])*(p[i]-w[eee2]));
            ull thr=((p[i]-sec)*(p[i]-sec))+((sec-w[eee3])*(sec-w[eee3]))+((p[i]-w[eee3])*(p[i]-w[eee3]));
            ull four=((p[i]-sec)*(p[i]-sec))+((sec-w[eee4])*(sec-w[eee4]))+((p[i]-w[eee4])*(p[i]-w[eee4]));
            ull five=((p[i]-theddd)*(p[i]-theddd))+((theddd-w[eee5])*(theddd-w[eee5]))+((p[i]-w[eee5])*(p[i]-w[eee5]));
            ull six=((p[i]-theddd)*(p[i]-theddd))+((theddd-w[eee6])*(theddd-w[eee6]))+((p[i]-w[eee6])*(p[i]-w[eee6]));
            /*cout<<pos<<whp<<pos2<<ses;
            cout<<one<<whp<<sec<<ses;
            cout<<eee<<whp<<eee2<<ses;
            cout<<eee3<<whp<<eee4<<ses;
            cout<<eee5<<whp<<eee6<<ses;
            cout<<ek<<whp<<dui<<whp<<thr<<whp<<four<<five<<whp<<six<<ses;*/
            ans=min(ans,min(ek,min(dui,min(thr,min(four,min(five,six))))));


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

