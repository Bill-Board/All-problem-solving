
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
    ll n, p, t;cin>>t;
    for(int x=1;x<=t;x++)
    {
        cin>>n;
        vector<int>a;
        for(ull i=0;i<2*n;i++)
            {
                cin>>p;
                a.push_back(p);
            }
        sort(a.begin(),a.end());
        //for(ull i=0;i<a.size();i++)
          //  cout<<a[i]<<whp;
       // cout<<ses;
        int h=0,c=0,j;
        for(ull i=0;i<a.size();i++)
        {
            ll count=1;
          //  cout<<"i   "<<i<<ses;
            for(j=i+1;j<a.size();j++)
            {
                if(a[i]!=a[j])
                    break;
                count++;
            }//cout<<count<<ses;cout<<"j "<<j<<ses;
            if(h<count)h=count;
            i=j-1;
        }
        cout<<"Case "<<x<<": "<<h<<ses;
    }
    return 0;
}



