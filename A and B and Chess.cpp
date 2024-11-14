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
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ///  'q', 'r', 'b', 'n', 'p', 'k', 9 5  3 3 1
    v99 white=0,black=0;
    char c;
    for(int i=1;i<=64;i++)
    {
        cin>>c;
        if(c=='q')black+=9;
        else if(c=='r')black+=5;
        else if(c=='b')black+=3;
        else if(c=='n')black+=3;
        else if(c=='p')black+=1;
        else if(c=='Q')white+=9;
        else if(c=='R')white+=5;
        else if(c=='B')white+=3;
        else if(c=='N')white+=3;
        else if(c=='P')white+=1;
    }
    if(white>black)cout<<"White"<<ses;
    else if(white<black)cout<<"Black"<<ses;
    else cout<<"Draw"<<ses;
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                                😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤
