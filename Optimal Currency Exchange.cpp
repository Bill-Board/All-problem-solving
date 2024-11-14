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
    int n, d, e, ans;cin>>n>>d>>e;
    int u=n/e, pe=e*5;
    if(n<d && n<pe)
        ans=n;
    else if(n<d && n>=pe)
        ans=n%pe;
    else if(n>=d && n<pe)
        ans=n%d;
    else if(n>=d && n>=pe)
    {
        if(n%d==0 || n%pe==0)ans=0;
        else
        {
            int w=n/pe;
            for(int i=1;i<=w;i++)
            {
                int euro=pe*i;
                //cout<<euro<<ses;
                int j=n%euro;
                ans=min(n%d,j%d);
                //cout<<j<<endl;
            }
        }
    }




    cout<<ans<<ses;

    return 0;
}



