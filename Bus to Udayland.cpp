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
    int n, k=0, j=1;
    char a, b, s[999999];
    cin>>n;
    for(int i=0;i<n*2;i++)
    {
        cin>>a>>b;
        if(k==0 && a=='O' && b=='O')
            {
                k=1;a='+';b='+';//cout<<"YES\n";
            }
        s[j]=a;j++;
        s[j]=b;j++;
        if(i%2==0)
        {
            cin>>a;
            s[j]=a;j++;
        }
    }//cout<<j<<ses;
    if(k==1)
    {
        cout<<"YES\n";
        for(int i=1;i<j;i++)
        {
            cout<<s[i];
            if(i%5==0)cout<<ses;
        }
    }
    else cout<<"NO\n";

    return 0;
}



