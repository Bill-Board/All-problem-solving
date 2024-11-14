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
bool func(string b)
{
    v99 p=0,len;bool ache=false,bche=false;
    //for(v99 i=0;i<a.size();i++)
    //{
      //  if(a[i]=='A')b[p++]='A';
        //else if(a[i]=='B')b[p++]='B';
   // }len=p;
    //cout<<len<<ses;
    //for(v99 i=0;i<len;i++)cout<<b[i];cout<<ses;
    for(v99 i=0;i<b.size();i++)
    {
        //cout<<b[i]<<" "<<b[i+1]<<ses;
        if(b[i]=='A' && b[i+1]=='B' && !ache){ache=true;i++;}
        else if(b[i]=='B' && b[i+1]=='A' && !bche){bche=true;i++;}
        if(ache && bche) return true;
    }
    return false;
}
bool func1(string b)
{
    v99 p=0,len;bool ache=false,bche=false;
    for(v99 i=b.size()-1;i>0;i--)
    {
        //cout<<b[i]<<" "<<b[i+1]<<ses;
        if(b[i]=='A' && b[i-1]=='B' && !ache){ache=true;i--;}
        else if(b[i]=='B' && b[i-1]=='A' && !bche){bche=true;i--;}
        if(ache && bche) return true;
    }
    return false;
}

int main()
{
    string a;cin>>a;
    bool flag=func(a),flag2=func1(a);
    if(flag || flag2)cout<<"YES"<<ses;
    else cout<<"NO"<<ses;
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤
