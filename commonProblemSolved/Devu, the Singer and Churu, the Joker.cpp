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
    int n, d, a,sum=0,ans;
    cin>>n>>d;
    for(int i=1;i<=n;i++)
    {
        cin>>a;sum+=a;
    }int x=(sum+(n-1)*10);
    if(x<=d)
    {
        if(x+10<=d){
         ans=(n-1)*2 + 2;
         x+=10;
         ans+=((d-x)/5);
        }
        else if(x+5<=d) ans=(n-1)*2 +1;
        else ans=(n-1)*2;
    }
    else
        ans=-1;
    cout<<ans<<ses;
    return 0;
}



