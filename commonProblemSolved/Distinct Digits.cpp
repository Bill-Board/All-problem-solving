//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<iostream>
//#include<boost/lexical_cast.hpp>
#include<cstring>
#include<string>
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
    int l, r, q=0;cin>>l>>r;
            //   string a;cin>>a;
            //   int l=stoi(a);cout<<a<<ses;convert string to integer

    for(int i=l;i<=r;i++)
    {
        string a= to_string(i);    // convert integer to string;
        //string b= to_string(r);
        //cout<<a<<"  1st"<<ses;
        for(int j=0;j<a.size()-1;j++)
        {q=0;
            for(int k=j+1;k<a.size();k++)
            {
                if(a[j]==a[k]){q=1;break;}
            }
            if(q==1)break;
        }
        if(q==0){cout<<a<<"\n"; return 0;}
    }
    cout<<-1<<ses;


    return 0;
}

