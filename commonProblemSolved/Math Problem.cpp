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
    //IOS
    int t;cin>>t;
    while(t--)
    {
        int a,b,x,y,n;cin>>n;
        cin>>a>>b;
        for(int i=1;i<n;i++)
        {
            cin>>x>>y;
            if(b<x){
                a=b;
                b=x;
            }
            else if(a>y)
            {
                b=a;
                a=y;
            }
            else if(b==x)a=b;
            else if(a==y)b=a;
            else if(a<=x && y<=b){
                int s=min(abs(x-a),min(abs(y-x),abs(b-y)));
                if(s==x-a)b=x;
                else if(s==y-x){a=x;b=y;}
                else a=y;
            }
            else if(x<=a && b<=y){swap(a,x);swap(b,y);
                int s=min(abs(x-a),min(abs(y-x),abs(b-y)));
                if(s==x-a)b=x;
                else if(s==y-x){a=x;b=y;}
                else a=y;
            }
            else if(a<=x && b>y){
                if(abs(b-x) > abs(b-y)){a=b;b=y;}
                else a=x;
            }
            else if(x<a && y<=b)
            {
                if(abs(a-x) > abs(a-y))b=y;
                else {b=a;a=x;}
            }cout<<"a  "<<a<<whp<<"  b  "<<b<<ses;
        }
        cout<<a<<whp<<b<<ses;
        if(n!=1)cout<<b-a<<ses;
        else cout<<0<<ses;
    }

    return 0;
}



