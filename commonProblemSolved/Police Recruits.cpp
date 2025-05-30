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
#define whp   " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()                  /// 1 -1 1 -1 -1 1 1 1
{
    int n, police=0, count=0, a[99999];cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    /**for(int i=0;i<n;i++)
        cout<<a[i]<<whp;
    cout<<ses;*/
    for(int i=0;i<n;i++)
    {
        if(a[i]<0 && police<1)
            count++;
        else if(a[i]<0 && police>0)
            police--;
        else
        {
            police+=a[i];
        }
        if(police==-1)
            police=0;

    }
    //cout<<"count "<<count<<"  police: "<<police<<ses;
    cout<<count<<ses;
    return 0;
}


