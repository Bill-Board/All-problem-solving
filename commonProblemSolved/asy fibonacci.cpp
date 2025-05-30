//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Sequence Containers : vector,deque,list....
#define vc    vector<char>
#define vi    vector<int>
#define vulli vector<unsigned long long>
#define vlli  vector<long long int>
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
    vulli fib;
    fib.push_back(0);
    ull a=0, b=1, c, q=10000000, p=1;

    fib.push_back(a);fib.push_back(b);
    while(p<q)
    {
       c=a+b;
       a=b;b=c;
       //cout<<c<<ses;
       c=c%10;
       fib.push_back(c);
       p++;
    }
    p=1;
    vlli vec;vector<long long int> ::iterator upper;
    for(int i=1;;i++)
    {
        p=p*2;
        vec.push_back(p);
        if(p>10000000)break;
    }
    ull n, t;cin>>t;
    while(t--)
    {
        cin>>n;
        upper=upper_bound(vec.begin(),vec.end(),n);
        cout<<fib[(*(upper-1))]<<ses;
    }
    return 0;
}



