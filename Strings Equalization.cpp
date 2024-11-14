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
    int q;cin>>q;
    while(q--)
    {
        string s, t;cin>>s>>t;
        if(s.size()!=t.size())cout<<"NO\n";
        else
        {
            int q=0;
            for(int i=0;i<s.size();i++)
            {
                for(int j=0;j<t.size();j++)
                {
                    if(s[i]==t[j])
                    {
                        cout<<"YES\n";q=1;
                        break;
                    }
                }
                if(q==1)break;
            }
            if(q==0)cout<<"NO\n";
        }
    }


    return 0;
}



