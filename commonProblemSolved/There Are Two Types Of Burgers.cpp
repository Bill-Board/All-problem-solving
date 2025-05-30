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
    int q;cin>>q;
    while(q--)
    {
        int b, p, f, h, c, ans, mini;cin>>b>>p>>f>>h>>c;
    b=b/2;
    if(h>c)
    {
        mini=min(b,p);
        ans=(mini*h);
        if(mini!=b)ans+=(min((b-p),f))*c;
    }
    else
    {
        mini=min(b,f);
        ans=(mini*c);
        if(mini!=b)ans+=(min((b-f),p))*h;
    }
    cout<<ans<<ses;
    }
    return 0;
}

