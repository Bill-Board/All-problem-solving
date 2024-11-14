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
    int n, x, y;
    vi a, b;a.push_back(0);b.push_back(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        a.push_back(x);b.push_back(y);
    }
    int sum=0,j, k, i, w, temp;
    for(int i=1;i<=n;i++)
    {
        k=i,w=0,temp=b[i];
        for(j=k;j<=n-1;j++)
        {
            w+=a[j];
            if(b[k]>b[j+1]){break;}
            i++;
            if(j+1==n)w+=a[j+1];
        }
        sum+=(temp*w);
        //cout<<"sum "<<sum<<ses;
    }
    if(w==0)sum+=(a[n]*b[n]);
    cout<<sum<<ses;


    return 0;
}


