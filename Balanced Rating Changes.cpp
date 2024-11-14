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
    vector<long int> a;ll n,sum=0, q=0;cin>>n;/// 0 means false.eta mins r vlu
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;a.push_back(x);
        x=floor(x/2);
        sum+=x;
    }
    if(sum==0)
    {
        for(int i=0;i<n;i++)cout<<a[i]/2<<ses;
    }
    else if(sum<0)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)cout<<a[i]/2<<ses;
            else if(sum==0 || a[i]<=0)
                cout<<(a[i]/2)<<ses;
            else
            {
                cout<<(a[i]/2)+1<<ses;
                sum++;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0 || a[i]==0)cout<<a[i]/2<<ses;
            else if(sum==0 || a[i]>=0)cout<<(a[i]/2)<<ses;
            else
            {
                cout<<(a[i]/2)-1<<ses;
                sum--;
            }
        }
    }



    return 0;
}



