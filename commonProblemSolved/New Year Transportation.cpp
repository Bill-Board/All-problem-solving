
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
    ll n, t, p=1, a[99999];
    cin>>n>>t;
    for(ll i=1;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i]+i;
    }
    //for(ll i=1;i<n;i++)
      //  cout<<a[i]<<wp;
    //cout<<ses;
    ll i=1;
    while(1)
    {
        i=p;//cout<<a[i]<<ses;
        if(a[i]==t){
            cout<<"YES"<<ses;return 0;
        }
        else if(a[i]==n){
            cout<<"NO"<<ses;return 0;
        }
        p=a[i];
    }
return 0;

}












