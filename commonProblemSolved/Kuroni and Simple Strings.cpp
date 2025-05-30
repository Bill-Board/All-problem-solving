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
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};

int main()
{
    string s;cin>>s;
    vector<v99>a[s.size()+1];
    v99 k=0,cnt=s.size();
    while(1)
    {
        bool ek=false,dui=false;
        for(v99 i=0;i<s.size();i++)
        {
            //if(cnt<3)break;
            if(s[i]=='(')
            {
                ek=true;
                for(v99 j=s.size()-1;j>i;j--)
                {
                    if(s[j]==')')
                    {
                        dui=true;
                        //cout<<"wer "<<i<<whp<<j<<ses;
                        s[j]='a';s[i]='a';
                        a[k].push_back(i+1);
                        a[k].push_back(j+1);
                        //cnt-=2;
                        break;
                    }
                }
            }
        }
        if(dui)++k;
        //cout<<k<<whp<<ek<<whp<<dui<<ses;
        if(!ek || !dui ){break;}
    }
    cout<<k<<ses;
    for(v99 i=0;i<k;i++)
    {
        vector<v99>c;c=a[i];
        cout<<c.size()<<ses;
        sort(c.begin(),c.end());
        for(v99 j:c)cout<<j<<whp;cout<<ses;
    }
    return 0;
}

/*

if(cnt<3)break;
        if(s[i]=='(')
        {
            //cout<<i<<ses;
            for(v99 j=i+1;j<s.size();j++)
            {
                if(s[j]==')'){//cout<<i<<whp<<j<<ses;
                s[j]='a';cnt-=2;
                a.push_back(i+1);a.push_back(j+1);break;}
            }
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
