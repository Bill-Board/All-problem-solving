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
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int r=0,l=0,u=0,d=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')l++;
            else if(s[i]=='R')r++;
            else if(s[i]=='U')u++;
            else d++;
        }
        if(l>0 && r>0 && u>0 && d>0)
        {
            l=min(l,r);
            r=l;
            u=min(u,d);
            d=u;
            cout<<l+u+r+d<<ses;
            for(int i=1;i<=l;i++)
                cout<<"L";
            for(int i=1;i<=u;i++)
                cout<<"U";
            for(int i=1;i<=l;i++)
                cout<<"R";
            for(int i=1;i<=u;i++)
                cout<<"D";
            cout<<ses;
        }
        else if(l>0 && r>0 && u>0)
            cout<<2<<ses<<"LR"<<ses;
        else if(l>0 && r>0 && d>0)
            cout<<2<<ses<<"LR"<<ses;
        else if(u>0 && d>0 && l>0)
            cout<<2<<ses<<"UD"<<ses;
        else if(u>0 && d>0 && r>0)
            cout<<2<<ses<<"UD"<<ses;
        else if(u>0 && d>0)
            cout<<2<<ses<<"UD"<<ses;
        else if(l>0 && r>0)
            cout<<2<<ses<<"LR"<<ses;
        else cout<<0<<ses;
    }



    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই খাওয়া দাওয়া                    😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

