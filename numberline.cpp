
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
int a[100010];

int main()
{
    int t, z=1;cin>>t;
    while(t--)
    {
        int n, q;cin>>n>>q;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<"Case "<<z++<<":\n";
        while(q--)
        {
            int f, b, count=0;cin>>f>>b;
            for(int j=0;j<n;j++)
            {
                if(a[n-1]<f)
                    break;
                else if(a[j]>b)
                    break;
                else if(a[j]>=f && a[j]<=b)
                    count++;
            }
            cout<<count<<ses;
        }
    }


    return 0;
}





