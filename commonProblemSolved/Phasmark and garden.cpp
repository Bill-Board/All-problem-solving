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
        int x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
        int a1,b1,a2,b2,q=1;
        /// 1
        if(x1-1==x2 && y1-1==y2)
        {
            a1=x2+1;
            b1=y2;
            a2=x2;
            b2=y2+1;
        }///    2
        else if(x1-1==x2 && y1==y2)
        {
            a1=x1;
            b1=y1+1;
            a2=x2;
            b2=y2+1;
        }///    3
        else if(x1-1==x2 && y1+1==y2)
        {
            a1=x1;
            b1=y1+1;
            a2=x2;
            b2=y2-1;
        }///     4
        else if(x1==x2 && y1+1==y2)
        {
            a1=x1+1;
            b1=y1;
            a2=x1+1;
            b2=y1+1;
        }///      5
        else if(x1==x2 && y1-1==y2)
        {
            a1=x1+1;
            b1=y1;
            a2=x1+1;
            b2=y1-1;
        }///       6
        else if(x1+1==x2 && y1-1==y2)
        {
            a1=x1+1;
            b1=y1;
            a2=x1;
            b2=y1-1;
        }///       7
        else if(x1+1==x2 && y1==y2)
        {
            a1=x1+1;
            b1=y1-1;
            a2=x1;
            b2=y1-1;
        }///        8
        else if(x1+1==x2 && y1+1==y2)
        {
            a1=x1+1;
            b1=y1;
            a2=x1;
            b2=y1+1;
        }
        else {cout<<-1<<ses;q=0;}
        if(q==1)cout<<a1<<whp<<b1<<whp<<a2<<whp<<b2<<ses;

    return 0;
}


