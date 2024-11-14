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
    int k,a[20],ans=0,sum=0;
    cin>>k;
    for(int i=0;i<12;i++){
        cin>>a[i];sum+=a[i];}
    if(k>sum)ans=-1;
    else if(k==0)ans=0;
    else
    {
        sort(a,a+12);
        reverse(a,a+12);
        for(int i=0;i<12;i++)
        {
            ans+=a[i];
            if(ans>=k){ans=i+1;break;}
        }
    }
    cout<<ans<<ses;
    return 0;
}


