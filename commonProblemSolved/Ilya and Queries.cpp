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
    int q, l, r;
    vi a;
    string s;cin>>s>>q;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])a.pb(1);
        else a.pb(0);
    }
    cout<<a.size()<<ses;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<whp;
    cout<<ses;
    while(q--)
    {
        vi b=a;
        /*for(int i=0;i<b.size();i++)
            cout<<b[i]<<whp;
        cout<<ses<<ses;*/
        cin>>l>>r;l--;r-=2;
        sort(b.begin()+l,b.begin()+r+1);
        /*for(int i=l;i<=r;i++)
            cout<<b[i]<<whp;
        cout<<ses<<ses;*/
        reverse(b.begin()+l,b.begin()+r+1);
        /*for(int i=l;i<=r;i++)
            cout<<b[i]<<whp;
        cout<<ses<<ses;*/
        int count =0;
        for(int i=l;i<=r;i++)
            {
                if(b[i]==0)break;
                count++;
            }
        cout<<count<<ses;
    }
    return 0;
}





