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
        int a,b,c,sum=0;
    cin>>a>>b>>c;//cout<<a<<whp<<b<<whp<<c<<ses;
    for(int i=0;;i++)
    {
        if(b==0)break;
        else if(b>0 && c>1)
            {//cout<<a<<whp<<b<<whp<<c<<ses;
            sum+=3;b=b-1;c=c-2;
            //cout<<a<<whp<<b<<whp<<c<<ses;
            //cout<<1<<ses;
            }
        else if(a>0 && b>1)
            {sum+=3;a--;b-=2;}//cout<<2<<ses;}
        else break;
        //cout<<a<<whp<<b<<whp<<c<<ses;
    }
    cout<<sum<<ses;
    }


    return 0;
}


