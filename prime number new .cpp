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

typedef int it;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    ull n,count;
    cin>>n;cout<<sqrt(n)<<ses;
    for(ull i=2;i<=sqrt(n);i++)
    {cout<<i<<ses;
        if(n%i==0)
        {
            cout<<"i "<<i<<ses;
            count=0;cout<<"Not Prime"<<ses;return 0;
        }
        else
            count=1;
        //if(count==0){
          //  }
    }
        cout<<"Prime"<<ses;
        return 0;
}
















