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
    IOS
    int t;cin>>t;
    while(t--)
    {
        int a, b,count =1;cin>>a>>b;
    if(a>b)swap(a,b);
    if(a==1 || b==1)
       cout<<"Finite"<<ses;
    else if(a<10)
    {
        if(a==2)
            cout<<"Finite"<<ses;
        else if(a==3)
        {
            if(b==5 || b==7 || b==8 || b==4)
                cout<<"Finite"<<ses;
            else
                cout<<"Infinite"<<ses;
        }
        else if((a==3 && b==4) || (a==2 && b==3) || (a==4 && b==5))
        cout<<"Finite"<<ses;
        else cout<<"Infinite"<<ses;
    }
    else
        cout<<"Infinite"<<ses;
    }
    return 0;
}


