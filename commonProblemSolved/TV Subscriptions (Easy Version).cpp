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
#define sll   set<long long>
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
        ll n, k, d;cin>>n>>k>>d;
        vi a;
        for(ll i=0;i<n;i++)
        {
            ll x;cin>>x;a.push_back(x);
        }
        ll l=9999999;
        if(d==1)
            l=1;
        else
        {
            for(ll i=0;i<(n-d+1);i++)
            {
                sll s;
                for(ll j=i;j<i+d;j++)
                {
                    s.insert(a[j]);
                }ll x=s.size();
                l=min(l,x);
            }
        }
        cout<<l<<ses;
    }

    return 0;
}



