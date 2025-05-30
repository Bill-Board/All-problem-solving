
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

int main()
{
    int n, a[10]={0};
    char c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        if(c=='L')
        {
            for(int j=0;j<10;j++)
            {
                if(a[j]==0)
                {
                    a[j]=1;break;
                }
            }
        }
        else if(c=='R')
        {
            for(int j=9;j>=0;j--)
            {
                if(a[j]==0)
                {
                    a[j]=1;break;
                }
            }
        }
        else
        {
            a[c-'0']=0;
        }
    }
    for(int i=0;i<10;i++)
        cout<<a[i];
    cout<<ses;
    return 0;
}


