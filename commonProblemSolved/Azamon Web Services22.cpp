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
    v99 t;cin>>t;
    while(t--)
    {
        string s,c,a;cin>>s>>c;
        bool hmm=false;v99 pos=0;
        if(s<c){cout<<s<<ses;}
        else
        {a=s;
            for(v99 j=0;j<s.size()-1;j++)
            {
                for(v99 i=s.size()-1;i>j;i--)
                {
                    if(s[j]>s[i])
                    {
                        swap(s[i],s[j]);
                        //char temp=s[i];
                        //s[i]=s[j];
                        //s[j]=temp;
                        hmm=true;pos=i;//cout<<s<<ses;
                    }

                }
                if(hmm)
                {
                    //cout<<pos<<whp<<j<<ses;
                    swap(a[pos],a[j]);
                    //char temp=a[pos];
                       // a[pos]=a[j];
                       // a[j]=temp;
                    break;
                }
                else continue;
            }
            if(a>=c)cout<<"---"<<ses;
            else cout<<a<<ses;
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
