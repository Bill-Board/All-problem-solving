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
    int n;vi a;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;a.push_back(x);
    }
    cout<<abs(a[1]-a[0])<<whp<<abs(a[n-1]-a[0])<<ses;
    for(int i=1;i<n-1;i++)
    {
        int mini=min(abs(a[i+1]-a[i]),abs(a[i]-a[i-1]));
        int maxi=max(abs(a[i]-a[0]),abs(a[n-1]-a[i]));
        cout<<mini<<whp<<maxi<<ses;
    }
    cout<<abs(a[n-1]-a[n-2])<<whp<<abs(a[n-1]-a[0])<<ses;


    return 0;
}

