//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Sequence Containers : vector,deque,list....
#define vc    vector<char>
#define vi    vector<int>
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
    IOS
    ll t;cin>>t;
    while(t--)
    {
        ll n, m,ans, odd=0, even,odd2=0,even2;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        if(x%2!=0)odd++;
    }even=n-odd;
    cin>>m;
    for(ll i=1;i<=m;i++)
    {
        ll x;cin>>x;
        if(x%2!=0)odd2++;
    }even2=m-odd2;
    //cout<<"even "<<even<<"  odd  "<<odd<<ses;
    //cout<<"even2 "<<even2<<"  odd2  "<<odd2<<ses;
    if(even>0 && odd>0)
    {
        if(even2>0 && odd2>0)
            ans=(even*even2)+(odd*odd2);
        else if(even2>0)
                ans=(even*even2);
        else ans=(odd*odd2);
    }
    else if(even>0)
    {
        if(even2>0)ans=(even*even2);
        else ans=0;
    }
    else
    {
        if(odd2>0)ans=(odd*odd2);
        else ans=0;
    }
    cout<<ans<<ses;
    }

    return 0;
}


