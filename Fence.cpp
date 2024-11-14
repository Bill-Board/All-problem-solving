//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Sequence Containers : vector,deque,list....
#define vc    vector<char>
#define vi    vector<int>
#define vli   vector<long int>
#define vs    vector<string>
#define dqi   deque<int>
#define dqc   deque<char>
#define lii   list<int>
#define lic   list<char>
#define pb    push_back
#define pf    push_front
#define pff() pop_front()
#define pbb() pop_back()

//Container Adaptors : queue,priority_queue, stack....
#define sti   stack<int>
#define stc   stack<char>

//Associative Containers : map,set....
#define mpll  map<long long ,long long>
#define mps   map<string,string>
#define si    set<int>
#define sc    set<char>
#define msi   multiset<int>

#define ses   "\n"
#define whp   " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    vi a;
    ll n,k,sum,equ=0,pos,q=0,p=0,low=99999999;
    cin>>n>>k;
    a.push_back(0);
    for(ll i=1;i<=n;i++){
            ll x;cin>>x;
            if(i==1)q=x;
            if(i<=k)equ+=x;
            a.push_back(x);
    }sum=equ;//cout<<sum<<ses;
    for(ll i=k+1;i<=n;i++)
    {
        //cout<<"i "<<i<<" k "<<k<<ses;
        sum-=q;
        q=a[i-k+1];
        sum+=a[i];
        //cout<<sum<<ses;
        if(low>sum){low=sum;pos=i-k+1;}
    }
    //cout<<"low "<<low<<ses<<ses<<pos<<ses;
    pos=low<equ?pos:1;
    cout<<pos<<ses;

    /**vli a;ll n,k, p=0,sum=0,pos,low=999998999;cin>>n>>k;
    a.push_back(0);
    for(ll i=1;i<=n;i++)
    {
        int x;cin>>x;a.push_back(x);
        sum+=x;
        p++;
        if(p==k)
        {
            p=0;

        }
    }*/



    return 0;
}


