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

int main()
{
    v99 n,ava=0;cin>>n;
    vector<pair<v99,v99> >a;
    vector<pair<v99,v99> >::iterator iter,iter2;
    for(v99 i=1;i<=n;i++)
    {
        v99 x;cin>>x;
        a.push_back(make_pair(x,i));
        ava+=x;
    }
    ava=ava/(n/2);
    sort(a.begin(),a.end());
    v99 low,high,lowvalue,highvalue;
    ptr: low=0;
    for(iter=a.begin();iter!=a.end();++iter)
    {
        lowvalue=iter->first;
        low=iter->second;
        a.erase(iter);
        for(iter2=a.end()-1;iter!=(a.begin()-1);--iter2)
        {
            highvalue=iter2->first;
            high=iter2->second;
            if(lowvalue+highvalue==ava)
            {
                cout<<low<<whp<<high<<ses;
                a.erase(iter2);
                goto ptr;
            }
        }
    }
    return 0;
}







///Alhamdulillah...   😘😘😘😘😍😍😍😍
///মিলাইতে পারলেই                                 😋😍
//                     🍔🍔🍔🍔🍰🍔🍔
//                      🍦🍨🍳🍧🍔🍔
//                    🍗🍗🍗🍗🍔🍔🍔🍔
//                   🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
//                    🤤🤤🤤🤤🤤🤤🤤🤤

