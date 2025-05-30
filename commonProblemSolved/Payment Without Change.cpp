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
    int t;cin>>t;
    while(t--)
    {
        ll a,b,n,s;cin>>a>>b>>n>>s;
        bool flag=false;
        if(((a*n)+b)<s)flag=false;
        else if(((a*n)+b)==s)flag=true;
        else if((a*n)==s)flag=true;
        else if(b>=s)flag=true;
        else
        {
            ll x=s/n;
            if(x>a)x=a;
            x=x*n;
            if(x+b>=s)flag=true;
            else flag=false;
        }
        if(!flag)cout<<"NO"<<ses;
        else cout<<"YES"<<ses;
    }


    return 0;
}


