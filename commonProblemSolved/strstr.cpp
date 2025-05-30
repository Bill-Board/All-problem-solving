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
    char a[999999],b[999999];
    int t;cin>>t;
    for(int y=1;y<=t;y++)
    {
        cin>>a>>b;
        int k=strlen(b);int add;
        int p=1;//int add=(int)strstr(a,b)-(int)a;
        for(p=1;((int)strstr(a,b)-(int)a)>=0;p++){
        //cout<<"p  "<<p<<ses;
        string c;

        //add=(int)strstr(a,b)-(int)a;
        //cout<<add<<ses;
        for(int i=((int)strstr(a,b)-(int)a)+k;i<strlen(a);i++)
            c.push_back(a[i]);
        int i;
        for(i=0;i<c.size();i++)
            a[i]=c[i];
        a[i]='\0';
        //cout<<a<<ses;
        }
        cout<<"Case "<<y<<": "<<p-1<<ses;getchar();
    }
    return 0;
}



