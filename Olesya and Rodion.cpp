//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
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
    int n,t;
    string s;
    cin>>n>>t;
    if(n==1 && t==10){cout<<-1<<ses;return 0;}
    else
    {for(int i=0;i<100;i++)
        s.push_back('0');
    //cout<<s<<ses;
    t!=10?s[0]=t+'0':s[0]='1';
        for(int i=0;i<n;i++)
            cout<<s[i];
        cout<<ses;
    }
    return 0;
}



