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
    ll n,ans;cin>>n;
    vector<long long> a;
    for(ll i=0;i<n;i++){ll x;cin>>x;a.push_back(x);}
    sort(a.begin(),a.end());
    ll high=0,low=0,maxi=a[n-1]-a[0];
    if(a[0]==a[n-1]){cout<<"0"<<whp<<(ll)(n*(n-1))/2<<ses;return 0;}
    else
    {
        for(ll i=0,j=n-1;i<n;i++,j--)
        {
            //if(a[0]!=a[i] && a[n-1]!=a[i])break;
            if(a[0]==a[i])low++;
            if(a[n-1]==a[j])high++;
        }
    //cout<<high<<whp<<low<<ses;
    ans=high*low;
    }
    cout<<maxi<<whp<<ans<<ses;
    return 0;
}


