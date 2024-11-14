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
int palinodrom(string s)
{
    //string s;
    //cin>>s;
    int i, j;
        for(i=0,j=s.size()-1;i<(s.size()/2);i++,j--)
        {
            if(s[i]!=s[j])return 0;
        }

    return 1;
}

int main()
{
    string s;
    cin>>s;
    //char c=s[0];
    int q=0;
    for(int i=0;i<s.size();i++)
    {if(s[i]==s[0])q++;}
        //cout<<q<<ses;
    if(q==s.size())cout<<0<<ses;
    else
    {
        int a=palinodrom(s);
        if(a==0)cout<<s.size()<<ses;
        else cout<<s.size()-1<<ses;
    }
    return 0;
}


