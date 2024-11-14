
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
/*int logarithm(int n,int b)
{
    long double sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(log10(i)/log10(b));
    }
    int q=(int)sum+1;
    //cout<<q<<ses;
    return q;
}*/
double a[1000010];
int main()
{
    ll n, b;
    a[0]=0;
    for(int i=1;i<=1000000;i++)
    {
        a[i]=log10((i))+a[i-1];
    }int t;cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n>>b;

        if(n==0)cout<<"Case "<<j<<": "<<1<<ses;
        else
            cout<<"Case "<<j<<": "<<(long)(a[n]/(a[b]-a[b-1]))+1<<ses;
    }
    return 0;
}


