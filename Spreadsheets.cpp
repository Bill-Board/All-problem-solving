
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
map<string,v99>name,name2,name3,name4,name5;
map<v99,string>number;
string fun(string s,char c)
{
    string s1;
    s1=""+s+c;return s1;
}
string fun2(string s,char c)
{
    string s1;
    s1=""+s+c;return s1;
}

void work()
{
    v99 n=1,q=1;
    n=name.size()*26;
    for(v99 i=65;i<=90;i++)
    {
        char c=i;
        string s=fun("",c);
        name[s]=q;
        number[q]=s;
        q++;
    }

    /*for(auto it=name.begin();it!=name.end();++it)
        cout<<it->first<<whp<<it->second<<ses;
    cout<<"\n\n name \n\n\n";*/
    for(auto it=name.begin();it!=name.end();++it)
    {
        string a=it->first;
        for(v99 i=65;i<=90;i++)
        {
            char c=i;
            string s=fun(a,c);
            name2[s]=q;
            number[q]=s;
            q++;
        }
    }
   /* for(auto it=name2.begin();it!=name2.end();++it)
        cout<<it->first<<whp<<it->second<<ses;
    cout<<"\n\n name2 \n\n\n";*/
    for(auto it=name2.begin();it!=name2.end();++it)
    {
        string a=it->first;
        for(v99 i=65;i<=90;i++)
        {
            char c=i;
            string s=fun(a,c);
            name3[s]=q;
            number[q]=s;
            q++;
        }
    }
    /*for(auto it=name3.begin();it!=name3.end();++it)
        cout<<it->first<<whp<<it->second<<ses;*/



    for(auto it=name3.begin();it!=name3.end();++it)
    {
        string a=it->first;
        for(v99 i=65;i<=90;i++)
        {
            char c=i;
            string s=fun(a,c);
            name4[s]=q;
            number[q]=s;
            q++;
        }
    }
    /*for(auto it=name4.begin();it!=name4.end();++it)
        cout<<it->first<<whp<<it->second<<ses;*/



    for(auto it=name4.begin();it!=name4.end();++it)
    {
        string a=it->first;
        for(v99 i=65;i<=90;i++)
        {
            char c=i;
            string s=fun(a,c);
            name5[s]=q;
            number[q]=s;
            q++;
            if(q>=100001)break;
        }
    }
}


int main()
{
    work();
    v99 t;cin>>t;
    while(t--)
    {
        string s;cin>>s;bool yes=false,flag=false;
        for(v99 i=0;i<s.size();i++)
        {
            v99 n=s[i]-'0';
            if(yes && s[i]=='C'){flag=true;break;}
            if(n>=0 && n<=9)yes=true;
        }
        if(flag)
        {
            v99 c=0,m=1;
            for(v99 i=s.size()-1;i>=0;i--)
            {
                v99 w=s[i]-'0';
                if(s[i]>'9')break;
                c+=(w*m);
                m*=10;
            }
            v99 r=0;m=1;
            for(v99 i=1;i<s.size();i++)
            {
                v99 w=s[i]-'0';
                if(s[i]>'9')break;
                r*=m;
                r+=w;
                m*=10;
            }
            cout<<number[c]<<r<<ses;

        }
        else
        {
            v99 c=0,m=1;
            for(v99 i=s.size()-1;i>=0;i--)
            {
                v99 w=s[i]-'0';
                if(s[i]>'9')break;
                c+=(w*m);
                m*=10;
            }
            //cout<<c<<ses;
            string d;
            for(v99 i=0;i<s.size();i++)
            {
                if(s[i]<='9')break;
                d.push_back(s[i]);
            }
            cout<<"R"<<c<<"C";
            if(name[d]!=0)cout<<name[d];
            else if(name2[d]!=0)cout<<name2[d];
            else if(name3[d]!=0)cout<<name3[d];
            else if(name4[d]!=0)cout<<name4[d];
            else cout<<name5[d];
            cout<<ses;
        }
    }

    return 0;
}




/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/

