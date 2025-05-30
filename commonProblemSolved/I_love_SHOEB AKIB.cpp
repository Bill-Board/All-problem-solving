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
    it n, h=-1, l=99999, a[99999];
    cin>>n;
    for(it i=0;i<n;i++)
        cin>>a[i];
    it count=0;
    for(it i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            h=a[i];count++;
            //cout<<i+1<<ses;
        }
        if(a[i]<l)
        {
            l=a[i];count++;
            //cout<<i+1<<ses;
        }
    }if(count<2)count=2;
    cout<<count-2<<endl;
    return 0;
}












