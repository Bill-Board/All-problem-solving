//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
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
    ll n, a[99999],suma=0,sumb=0,sumc=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];suma+=a[i];
    }
    for(ll i=0;i<n-1;i++)
    {
        cin>>a[i];sumb+=a[i];
    }
    for(ll i=0;i<n-2;i++)
    {
        cin>>a[i];sumc+=a[i];
    }
    cout<<suma-sumb<<ses;
    cout<<sumb-sumc<<ses;
    return 0;
}

