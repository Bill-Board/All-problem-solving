//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
//set <int, greater <int> > ::iterator it;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IOS
   int t;
   cin>>t;
   while(t--)
   {
        string a,b;
        map<char,v99>x,y;
        map<char,v99>::iterator it;
        cin>>a>>b;
        for(int i=0;i<a.size();i++)
        {
            char c=a[i];
            if(x.count(c)==0)
            {
                x[c]=1;
            }
            else
            {
                v99 r=x[c];r++;
                x[c]=r;
            }
        }
        //for(it=y.begin();it!=y.end();it++)
          //  cout<<it->first<<whp<<it->second<<ses;
        v99 p=a.size(),q=b.size(),countt=0;bool flag=false;
        if(p>q)flag=false;
        else
        {
            for(v99 w=0;w<(b.size()-a.size()+1);w++)
            {
                y=x;
                char z=b[w];
                if(y.count(z)>0)
                {
                    countt=0;p+=w;
                    for(v99 i=w;i<p;i++)
                    {
                        char c=b[i];
                      // cout<<c<<ses;
                        if(y.count(c)>0)
                        {

                            v99 g=y[c];
                           //cout<<"g "<<g<<ses;
                            --g;y[c]=g;
                            if(g==0){y.erase(c);}
                        }
                        else break;
                    }
                    //cout<<"jj"<<ses;

                }
                if(y.empty()){flag=true;break;}
                y.clear();
            }
        }
        if(flag)cout<<"YES"<<ses;
        else cout<<"NO"<<ses;
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
