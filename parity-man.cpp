
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
    ull n, t;cin>>t;
    for(ull p=1;p<=t;p++)
    {
    cin>>n;
    ull k=0,rem,a[9999];
    for(ull i=0;n!=0;i++)
    {
        rem=n%2;
        n=n/2;
        a[i]=rem;
        k++;
    }
    //for(ull i=0;i<k;i++)
      //  cout<<a[i];
    //cout<<ses;
    sort(a,a+k);
    reverse(a,a+k);
    //for(ull i=0;i<k;i++)
      //  cout<<a[i];
    //cout<<whp;
    rem=0;
    for(ull i=0;i<k;i++)
    {
        if(a[i]==0)
            break;
        rem++;
        //cout<<rem<<ses;
    }//cout<<"Rem "<<rem<<ses;
    rem%2==0?cout<<"Case "<<p<<": even\n":cout<<"Case "<<p<<": odd\n";
    }
    return 0;
}


