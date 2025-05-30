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

typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IOS
    int t;cin>>t;
    while(t--)
    {
        v99 n;bool ok=true;
        string a, b,c="",d="";cin>>n>>a>>b;
        v99 one=n+1,sec=n+1;
        for(v99 i=0;i<n;i++)
        {
            if(a[i]!=b[i]){one=i;break;}
        }
        for(v99 i=one+1;i<n;i++)
        {
            if(a[i]!=b[i]){sec=i;break;}
        }
        if(one==n+1 || sec==n+1){cout<<"NO"<<ses;continue;}
        swap(a[one],b[sec]);
        if(a==b)cout<<"YES"<<ses;
        else cout<<"NO"<<ses;

    }
    return 0;
}



