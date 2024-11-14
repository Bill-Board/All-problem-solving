//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
#define mxi 99999
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    vector<v99>a,b,c;
    v99 x,n,x1=0,x0=0,h=-1,pluss=0,minuss=0;cin>>n;
    for(v99 i=0;i<n;i++)
    {
        cin>>x;
        if(i==0 && x==1)b.push_back(0);
        if(x==1){x1++;if(i!=0 && x0!=0)b.push_back(x0);x0=0;}
        else {x0--;if(i!=0 && x1!=0)b.push_back(x1);x1=0;}
    }if(x1!=0)b.push_back(x1);
    else b.push_back(x0);
    if(x==1)b.push_back(0);
    //for(v99 i=0;i<b.size();i++)
        //cout<<b[i]<<whp;cout<<ses;
    x1=0;x0=0;
    for(v99 i=0;i<b.size();i++)
    {
        if(b[i]<0)x1+=b[i];
        else x0+=b[i];
        if(b[i]<0)c.push_back(abs(b[i]));
        else c.push_back(-b[i]);
    }
    //cout<<x1<<whp<<x0<<ses;
    for(v99 i=0;i<b.size();i++)
        cout<<c[i]<<whp;cout<<ses;
    bool ache=false;
    if(b.size()<6)
    {
        if(b.size()==5 && (b[0]!=0 || b[b.size()-1]!=0))goto ptr;
        vector<v99>::iterator it;
        if(b.size()!=1){it=b.begin();if(b[0]==0)b.erase(it);
        it=b.end();if(b[b.size()-1]==0)b.erase(--it);}
        if(b.size()==1){if(b[0]<0)cout<<abs(b[0])<<ses;
                        else cout<<n-1<<ses;}
        else if(b.size()==2)cout<<abs(b[0])+abs(b[1])<<ses;
        else
        {
            if(b[0]<0)cout<<max((b[1]-b[0]),(b[2]-b[0]))<<ses;
            else cout<<b[0]-b[1]+b[2]<<ses;
        }
    }
    else
    {
        ptr: ache=false;
        for(v99 i=1;i<b.size();i+=2)
        {
            v99 ans=b[i]+b[i+1]+b[i-1];
            //cout<<ans<<ses;
            if(ans<0)
            {
                ans=abs(ans);
                if(h<ans)
                {
                    ache=true;
                    h=ans;pluss=b[i];minuss=abs(b[i-1]+b[i+1]);
                }

            }
            else
            {

                if(i+2<n)
                {
                    ans=b[i]+b[i+1];
                    if(h<ans){ache =false;h=ans;pluss=b[i];minuss=abs(b[i+1]);}
                }
                else
                {
                    ans=b[i]+b[i+1]+b[i+2];
                    if(h<ans){ache =false;h=ans;pluss=b[i]+b[i+2];minuss=abs(b[i+1]);}
                }
            }
            //cout<<"H  "<<h<<ses;
        }
        if(ache)
        {
            x0+=minuss;x0-=pluss;
            cout<<x0<<ses;
        }
        else
        {
            x0+=minuss;
            cout<<x0<<ses;
        }
    }
    return 0;
}





///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤
