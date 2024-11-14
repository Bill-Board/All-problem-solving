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
    int n,x=0,y=0,z=0, a[99999],b[99999];cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>a[i]
            if(a[i]==1)x++;
            else if(a[i]==2)y++;
            else z++;
        }
        int p=min(x,min(y,z));
    cout<<p<<ses;x=0;
    for(int i=0;i<p;i++)
    {
        for(int j=1;j<=3;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(a[k]==j)
                {
                    b[x]=k+1;
                    x++;
                }
            }
        }
    }


    return 0;
}



