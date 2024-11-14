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
    int sum=0,a[100];
    a[0]=0;
    for(int i=1;i<=4;i++){cin>>a[i];sum+=a[i];}
    sort(a,a+5);
    //for(int i=1;i<=4;i++)
      //  cout<<a[i]<<whp;
    //cout<<ses<<sum<<ses;
    if((a[1]+a[4])==(a[2]+a[3]) || (a[1]+a[3])==(a[2]+a[4]) || (a[1]+a[2]+a[3]==a[4]))
    cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}



