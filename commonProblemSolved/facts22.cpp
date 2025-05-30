
//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
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

/*ull factorial(ull n)
{
    ull sum=1;
    if(n==0)return 1;
    else
    {
        for(ull i=1;i<=n;i++)
        {
            sum*=i;
            //cout<<i<<whp<<sum<<ses;
        }
        return sum;
    }
}*/
double logarithm(int n,int b)
{
    double sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(log10(i)/log10(b));
    }
    cout<<sum;
    return sum;
}

int main()
{
    ll n, b, t=3;//cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n>>b;
        if(n==0)cout<<1<<ses;
        else
        {
            logarithm(n,b);
        }

    }
    return 0;
}



