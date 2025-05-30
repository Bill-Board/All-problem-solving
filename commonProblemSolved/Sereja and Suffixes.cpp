//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<set>
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
#define sli   set<long int>
#define sc    set<char>
#define msi   multiset<int>

#define ses   "\n"
#define whp   " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    /**si a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    a.insert(1);
    cout<<a.size()<<ses;
    for(auto i=a.begin();i!=a.end();i++)
        cout<<*i<<whp;
    cout<<ses;*/
    vi a;ll n, m, l, b[100000];cin>>n>>m;
    a.push_back(0);
    for(ll i=1;i<=n;i++)
    {
        ll x;cin>>x;a.push_back(x);
    }
    sli c;
    for(ll i=n;i>0;i--)
    {
        //cout<<a[i]<<ses;
        c.insert(a[i]);
        b[i]=c.size();
    }
    while(m--)
    {
        cin>>l;
        cout<<b[l]<<ses;
    }

    return 0;
}



