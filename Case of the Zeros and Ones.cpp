//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<vector>
#include<iterator>
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
    long int n, x1=0, x0=0;
    cin>>n;
    char c;
    for(ll i=0;i<n;i++)
    {
        cin>>c;//a.pb(c);
        if(c=='1')x1++;
        else x0++;
    }
    cout<<abs(x1-x0)<<ses;
    /**cout<<x1<<ses;
    //for(int i=0;i<n;i++)
        //cout<<a[i]<<" ";
    //cout<<ses;cout<<a.size()<<ses;
    //a.erase(a.begin()+n,a.end());
    //cout<<a<<ses;
    if(x1==a.size() || x1==0){cout<<a.size()<<ses;return 0;}
    //cout<<"gese\n";
    for(ll i=0;i<a.size()-1;i++)
    {
        //cout<<"i "<<i<<ses;
        if(a[i]!=a[i+1])
           {
               ll count=0;
               for(ll j=0;j<a.size();j++)
                {
                    if(a[j]==a[0])count++;
                }
                if(count==a.size())break;
               a.erase(a.begin()+i);
               //cout<<a<<ses;
               a.erase(a.begin()+i);
               //cout<<a<<ses;
                i==0?i--:i-=2;
                //cout<<"size "<<a.size()<<ses;
                if(a.size()==0)break;
           }
           //char x=a.begin();
        //cout<<a<<ses<<"3   YES\n"<<ses<<ses;

    }

    //cout<<ses;
    //cout<<a<<ses;
    cout<<a.size()<<ses;*/

    return 0;
}


