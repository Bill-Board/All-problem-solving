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
int palinodrom(char*a)
{
    int x=0,b,i,j;
    int len=strlen(a);
    if(len%2==0)
        b=len/2;
    else
        b=len/2 +1;
    for(i=0,j=len-1;i<b,j>=(b);i++,j--)
    {
        if(a[i]==a[j])
        x++;
    }
    if(x>=b)
        return 1;
    else
        return 0;
}

int main()
{
    char s[99999];
    cin>>s;
    char c=s[0];
    int q=0;
    for(int i=0;i<strlen(s);i++)
    {if(s[i]==c)q++;}
        //cout<<q<<ses;
    if(q==strlen(s))
    {cout<<0<<ses;return 0;}
    int a=palinodrom(s);
    if(a==0)cout<<strlen(s)<<ses;
    else cout<<strlen(s)-1<<ses;
    return 0;
}
