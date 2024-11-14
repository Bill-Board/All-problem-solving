 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
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
int main()
{
    //test
    string qq,s;
    stack<string>fst,bst,nor;
    //bst.push("http://www.lightoj.com/");
    nor.push(ligt);
    while(1)
    {
        cin>>qq;
        if(qq==q)break;
        if(qq==v)
        {
            cin>>s;
            string nnn=nor.top();
            bst.push(nnn);
            while(!fst.empty()){fst.pop();}
            nor.push(s);
            cout<<s<<ses;
        }
        else if(qq==b)
        {
            //stack<string>lll(bst);while(!lll.empty()){cout<<lll.top()<<ses;lll.pop();}
            if(bst.empty()){cout<<"Ignored"<<ses;}
            //cout<<"YES"<<ses;
            string nnn;
            if(!bst.empty()){nnn=bst.top();bst.pop();//cout<<"nor top "<<nor.top()<<ses;
            fst.push(nor.top());}
            nor.push(nnn);
            cout<<nnn<<ses;
            //lll=fst;
            //while(!lll.empty()){cout<<lll.top()<<ses;lll.pop();}
        }
        else
        {
            //stack<string>lll(fst);while(!lll.empty()){cout<<lll.top()<<ses;lll.pop();}
            if(fst.empty()){cout<<"Ignored"<<ses;continue;}
            //cout<<"Yes"<<ses;
            string nnn=fst.top();fst.pop();
            //if(bst.empty())
                bst.push(nnn);
            nor.push(nnn);
            cout<<nnn<<ses;
        }
        cout<<"bst  \n";
        stack<string>lll(bst);while(!lll.empty()){cout<<lll.top()<<ses;lll.pop();}cout<<"fst \n";
        lll=fst;while(!lll.empty()){cout<<lll.top()<<ses;lll.pop();}

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
