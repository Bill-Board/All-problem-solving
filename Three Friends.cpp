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
        ll a[5];
        a[0]=0;
        ll ans=0;
        for(ll i=1;i<=3;i++)
            cin>>a[i];
        sort(a,a+4);
        if(a[1]==a[2] && a[2]==a[3])
            ans=0;
        else if(a[1]==a[2])
        {
            a[1]=a[1]+1;
            a[2]=a[2]+1;
            if(a[1]!=a[3])
                a[3]=a[3]-1;
            ans=(a[3]-a[2])*2;
        }

        else if(a[2]==a[3])
        {
            a[2]=a[2]-1;
            a[3]=a[3]-1;
            if(a[2]!=a[1])
                a[1]=a[1]+1;
            ans=(a[2]-a[1])*2;
        }

        else
        {
            a[1]=a[1]+1;
            a[3]=a[3]-1;
            ans= (a[2]-a[1])+(a[3]-a[2])+(a[3]-a[1]);
        }
        cout<<ans<<ses;
    }

    return 0;
}









