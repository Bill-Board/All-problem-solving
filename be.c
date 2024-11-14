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
    //IOS
    int t;cin>>t;
    while(t--)
    {
        string a;cin>>a;
        bool flag=false;
        for(int i=0;i<a.size();i++)
        {
            cout<<a[i]<<whp<<a[i+1]<<ses;
            if(a[i]==a[i+1] && a[i]!='?')
                {
                    flag=true;
                    break;
                }
            else
            {
                if(a[i]=='?')
                {
                    if(a[i-1]=='a' && a[i+1]=='b')
                        a[i]='c';
                    else if(a[i-1]=='b' && a[i+1]=='c')
                        a[i]='a';
                    else if(a[i-1]=='a' && a[i+1]=='c')
                        a[i]='b';
                    else if(a[i-1]=='a')a[i]='b';
                    else if(a[i-1]=='b')a[i]='c';
                    else if(a[i-1]=='c')a[i]='a';
                    else if(a[i+1]=='a')a[i]='b';
                    else if(a[i+1]=='b')a[i]='c';
                    else if(a[i+1]=='c')a[i]='a';
                    else a[i]='a';
                }
            }
        }
        if(flag)cout<<-1<<ses;
        else cout<<a<<ses;
    }
    return 0;
}



