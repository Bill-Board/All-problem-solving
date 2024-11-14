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
    int n,q;cin>>n>>q;
    vector<int> a(n+1,0);
    //for(int i=0;i<n;i++)
       // cout<<a[i]<<whp;
   // cout<<ses;
    int x,y;
    while(q--)
    {
        cin>>x>>y;
        for(int i=x;i<=y;i++)
        {
            if(a[i]==1)a[i]=0;
            else a[i]=1;
        }
    }
        for(int i=1;i<=n;i++)
        {cout<<a[i];
        if(i!=n)
        cout<<whp;}
        cout<<ses;



    return 0;
}

/**
int x,y;
    while(cin>>x>>y){
        --x;y=n-y;int z=1;
        if(a[x]==1)z=0;
        fill(a.begin() + x, a.end() - y, z);
        for(int i=0;i<n;i++)
        cout<<a[i]<<whp;
        cout<<ses;
    }*/


