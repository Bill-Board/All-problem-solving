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
    string s;cin>>s;
    int count=min(abs(97-int(s[0])),abs(123-int(s[0])));
    int p=int(s[0]);
    for(int i=1;i<s.size();i++)
    {
        //cout<<"count "<<count<<ses;
        //cout<<"position "<<p<<ses;
        if(p<110)count+=min(abs(p-int(s[i])),(abs(p-97)+abs(123-int(s[i]))));
        else count+=min(abs(p-int(s[i])),abs(123-p+int(s[i])-97));
        p=int(s[i]);
    }
    cout<<count<<ses;//cout<<"position "<<p<<ses;
    return 0;
}



