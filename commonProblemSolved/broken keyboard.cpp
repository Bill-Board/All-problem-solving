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
    int t;cin>>t;
    while(t--)
    {
    string s,q;
    set <int, greater <int> > ans;
    cin>>s;
    int j=s.size(),f=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
            i++;
        else {
            int x=s[i],y=s[i+1];
            ans.insert(x);
        }
    }
    set <int, greater <int> > :: iterator itr;
    for (itr = ans.begin(); itr != ans.end(); ++itr)
    {

        char a=*itr;
        q.push_back(a);
    }
    sort(q.begin(),q.end());
    cout <<q<< endl;
    }

    return 0;
}


