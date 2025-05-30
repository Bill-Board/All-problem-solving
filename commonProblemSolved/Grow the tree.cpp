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
    int n;cin>>n;
    vi a;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;a.push_back(x);
    }
    sort(a.begin(),a.end());
    ull x=0, y=0;
    for(int i=0,j=n-1;i<=j;i++,j--)
    {
        if(i!=j)
        {
            x+=a[j];
            y+=a[i];
        }
        else
        {
            x+=a[j];
        }
    }
    //cout<<x<<whp<<y<<ses;
    //cout<<pow(x,2.0)<<ses;
    double z=2;
    cout<<x*x+y*y<<ses;
    return 0;
}


