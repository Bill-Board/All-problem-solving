//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Sequence Containers : vector,deque,list....lksdfjkls
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
    vi a;
    for(int i=9;i>=0;i--)
        a.pb(i);
    vi b=a;
    for(int i=0;i<10;i++)
    cout<<b[i]<<whp;
    cout<<ses<<ses;
    sort(b.begin()+3,b.begin()+6);
    for(int i=0;i<10;i++)
    cout<<b[i]<<whp;
    cout<<ses<<ses;
    reverse(b.begin()+3,b.begin()+6);
    for(int i=0;i<10;i++)
    cout<<b[i]<<whp;
    return 0;
}



