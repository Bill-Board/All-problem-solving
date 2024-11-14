
//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IOS
    int t;cin>>t;
    while(t--)
    {
            set <int, greater <int> > a;
            int n,x,y,countt=0;cin>>n;
            for(ll i=0;i<n;i++)
            {
                cin>>x;
                if(x%2==0)a.insert(x);
            }
            //reverse(a.begin(),a.end());
            ptr: x=0;
            set <int, greater <int> > ::iterator it;
            //for(it=a.begin();it!=a.end();++it)
               // cout<<*it<<whp;
            //cout<<ses;
            if(a.size()!=0){
            for(it=a.begin();it!=a.end();++it)
            {
                //break;
                x=*it;//cout<<x<<ses;
                a.erase(x);
                y=x/2;
                countt++;
                if(y%2==0)
                {
                    a.insert(y);
                }//cout<<"Count "<<countt<<ses;
                goto ptr;

            }
            }
            cout<<countt<<ses;
    }







    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                                😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤
