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
#define exc 1e9+7
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
typedef long long ll;
typedef unsigned long long v99;
using namespace std;
ll fx[4]= {1,-1,0,0};
ll fy[4]= {0,0,1,-1};

int main()
{
    //test
    //while(1)
    {
        v99 n;queue<v99>q;q.push(4);q.push(7);
        vector<v99>v,vec,tree;v.push_back(0);tree.push_back(0);//v.push_back(7);
        while(!q.empty())
        {
            v99 x=q.front();q.pop();v.push_back(x);
            //cout<<x<<ses;
            q.push(x*10+4);
            q.push(x*10+7);
            if(x>(v99)exc)break;
        }v99 age=0,sum=0;
        for(v99 i=1;i<v.size();i++)
        {
            v99 x=v[i]-age;
            vec.push_back(x*v[i]);sum+=(x*v[i]);tree.push_back(sum);
            age=v[i];
        }
        //cout<<v.size()<<ses;
        //for(auto i:v)cout<<i<<whp;cout<<ses;
        //for(auto i:tree)cout<<i<<whp;cout<<ses;
        v99 l,r;cin>>l>>r;
        v99 posl=lower_bound(v.begin(),v.end(),l)-v.begin();
        v99 posr=lower_bound(v.begin(),v.end(),r)-v.begin();



        //cout<<posl<<whp<<posr<<ses;

        v99 suml=0,sumr=0,summ=0;
        {suml+=((v[posl]-l+1)*v[posl]);posl++;}
        if(v[posr]!=r){sumr+=((r-v[posr-1])*v[posr]);posr--;}
        summ=tree[posr]-tree[posl-1];
        //cout<<suml<<whp<<summ<<whp<<sumr<<ses;
        cout<<suml+max((v99)0,summ)+sumr<<ses;

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

