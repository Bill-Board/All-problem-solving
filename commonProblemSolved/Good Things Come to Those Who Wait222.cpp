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
    ll t;cin>>t;
    for(ll j=1;j<=t;j++)
        {
            vi a;
            ll n,k,x;cin>>n;
            if(n==1){cin>>x;cout<<"Case "<<j<<": "<<x*x<<ses;}
            else
            {
                for(ll i=0;i<n;i++)
                {
                    cin>>x;a.push_back(x);
                }
                sort(a.begin(),a.end());
                for(ll i=1;i<n;i++)
                {
                    ll sum=a[0]*a[i];
                    if(sum>a[n-1]){cout<<"Case "<<j<<": "<<sum<<ses;break;}
                }
            }
        }





    return 0;
}
