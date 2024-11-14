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

bool pali(string s)
{
    v99 i, j;
        for(i=0,j=s.size()-1;i<(s.size()/2);i++,j--)
        {
            if(s[i]!=s[j]){return false;}
        }
        return true;
}

//q.erase(q.begin()+(q.size()-1));
int main()
{
    test
    {
        string s,p,q;cin>>s;q=s;
        v99 visi[s.size()];memset(visi,0,sizeof visi);
        v99 i=0,j=s.size()-1;
        while(q[i]==q[j] && i<j)
        {
            visi[i]=1;visi[j]=1;
            ++i;--j;
            //cout<<q<<" i "<<i<<" j "<<j<<ses;
        }q.clear();q="";string qq="";
        for(v99 i=0;i<s.size();i++)
        {
            if(!visi[i])q+=s[i];
            else qq+=s[i];
        }//cout<<q<<ses;
        string ww=q,w=q;v99 pp=w.size();
        for(v99 i=0;i<pp;i++)
        {
            if(pali(w)){break;}//cout<<w<<ses;
            w.erase(w.begin()+(w.size()-1));
        }
        for(v99 i=0;i<pp;i++)
        {
            if(pali(ww)){break;}//cout<<ww<<ses;
            ww.erase(ww.begin());
        }q.clear();
        if(w.size()>ww.size())q=w;
        else q=ww;
        j=1;//cout<<q<<ses;
        if(qq.size())
        {
            for(v99 i=0;i<qq.size();i++)
            {
                cout<<qq[i];
                if(j*2==qq.size())cout<<q;j++;
            }
        }
        else
            cout<<q;
        cout<<ses;
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

