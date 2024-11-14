 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test  long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is string name
///               ans x is index;
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
string b="BACK",v="VISIT",f="FORWARD",q="QUIT",ligt="http://www.lightoj.com/";

void print(vector<string>stc)
{
    for(auto it:stc)cout<<it<<ses;
}
void func(vector<string>&stc,v99 i)
{
    vector<string>kkk;
    for(v99 j=0;j<=i;j++)kkk.push_back(stc[j]);
    //cout<<"kkk "<<i<<ses;
    //print(kkk);cout<<"ysa\n";
    stc.clear();stc=kkk;
}

int main()
{
    v99 tt=0;
    test
    {
        //IOS
        cout<<"Case "<<++tt<<":"<<ses;
        string qq,s;
        vector<string>stc;
        stc.push_back(ligt);
        v99 i=0;
        while(1)
        {
            cin>>qq;
            if(qq==q)break;
            else if(qq==v)
            {
                cin>>s;cout<<s<<ses;
                //cout<<stc[i]<<ses;
                func(stc,i);
                //cout<<i<<ses;
                stc.push_back(s);//print(stc);
                ++i;
            }
            else if(qq==b)
            {
                if(i==0){cout<<"Ignored"<<ses;continue;}
                --i;
                cout<<stc[i]<<ses;//cout<<i<<ses;
            }
            else
            {
                if(i==stc.size()-1){cout<<"Ignored"<<ses;continue;}
                ++i;cout<<stc[i]<<ses;
            }
        }
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
