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
    for(v99 i=97;i<=122;i++)
    {
        char c=i;
        string s=fun("",c);
        name[s]=q;
        q++;
    }

    /*for(auto it=name.begin();it!=name.end();++it)
        cout<<it->first<<whp<<it->second<<ses;
    cout<<"\n\n name \n\n\n";*/
    for(auto it=name.begin();it!=name.end();++it)
    {
        string a=it->first;
        for(v99 i=a[a.size()-1]+1;i<=122;i++)
        {
            char c=i;
            string s=fun(a,c);
            name2[s]=q;
            q++;
        }
    }
    //for(auto i:name2)cout<<i.first<<ses;
   /* for(auto it=name2.begin();it!=name2.end();++it)
        cout<<it->first<<whp<<it->second<<ses;
    cout<<"\n\n name2 \n\n\n";*/
    for(auto it=name2.begin();it!=name2.end();++it)
    {
        string a=it->first;
        for(v99 i=a[a.size()-1]+1;i<=122;i++)
        {
            char c=i;
            string s=fun(a,c);
            name3[s]=q;
            q++;
        }
    }
    /*for(auto it=name3.begin();it!=name3.end();++it)
        cout<<it->first<<whp<<it->second<<ses;*/



    for(auto it=name3.begin();it!=name3.end();++it)
    {
        string a=it->first;
        for(v99 i=a[a.size()-1]+1;i<=122;i++)
        {
            char c=i;
            string s=fun(a,c);
            name4[s]=q;
            q++;
        }
    }
    /*for(auto it=name4.begin();it!=name4.end();++it)
        cout<<it->first<<whp<<it->second<<ses;*/


bool ok=false;
    for(auto it=name4.begin();it!=name4.end();++it)
    {
        string a=it->first;
        for(v99 i=a[a.size()-1]+1;i<=122;i++)
        {
            char c=i;
            string s=fun(a,c);
            name5[s]=q;
            q++;
            if(q>=83682){ok=true;break;}
        }
        if(ok)break;
    }//cout<<q<<ses;
}


int main()
{
    work();
    string s;
    while(cin>>s)
    {
        if(s.size()==1)cout<<name[s]<<ses;
        else if(s.size()==2)cout<<name2[s]<<ses;
        else if(s.size()==3)cout<<name3[s]<<ses;
        else if(s.size()==4)cout<<name4[s]<<ses;
        else if(s.size()==5)cout<<name5[s]<<ses;
        else cout<<0<<ses;
    }
    return 0;
}
