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
    int t, n, k=1, q;cin>>t;
    while(t--)
    {
        cin>>n;
        float a=sqrt(n);
        int arr[99999],c=(int)sqrt(n);
        if(a==c)q=0;
        else if(n%2==0)q=1;
        else
        {
            long int p=0;
            for(int i=1;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    arr[p]=i;p++;
                }
            }
            q=9999999;
            if(p==1)q=n-1;
            else
            {
                for(int i=0;i<p-1;i++)
                {
                    if(q>(arr[i+1]-arr[i]))
                        q=(arr[i+1]-arr[i]);
                }
            }
        }
        cout<<"Case #"<<k++<<": "<<q<<endl;
    }

    return 0;
}



