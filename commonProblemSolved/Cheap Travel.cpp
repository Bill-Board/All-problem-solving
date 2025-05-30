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
#define wp    " "


typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    int n, m, a, b;
    cin>>n>>m>>a>>b;float c=b;c=c/m;
    //cout<<c<<ses;int x=n/m;cout<<b+x*b<<ses;cout<<((n/m)*b)+((n%m)*a)<<ses;
    if(c>=a)
        cout<<a*n<<ses;
    else
    {int x=n/m;
        if(n%m==0)
            cout<<x*b<<ses;
        else{               /// 10 3 5 1
                cout<<min((b+x*b),(((n/m)*b)+((n%m)*a)))<<ses;}
    }
    return 0;
}





