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

int main()
{
    int n, a[99][99];cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            a[i][j]=1;
        //cout<<ses;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
                if(i!=0 && j!=0)
                {
                    a[i][j]=a[i-1][j]+a[i][j-1];
                }
            }
    }
    cout<<a[n-1][n-1]<<ses;
    return 0;
}



