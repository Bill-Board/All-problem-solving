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
    int n, k,sumpos=0,sumneg=0,pos=0,neg=0,ans=0;cin>>n>>k;
    vi p,n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x<0){n.push_back(x);neg++;sumneg-=x;}
        else {p.push_back(x);pos++;sumpos+=x;}
    }
    sort(a.begin(),a.end());
    if(pos==n)
    {
        if(k%2==0)ans=sumpos;
        else ans=sumpos-p[0];
    }
    else if(neg==n)
    {
        cout<<sumneg<<ses;
        if(k<=n)
        {k=n-k;
            for(int i=n.size()-1;k!=0;i--)
            {
                sumneg=sumneg+n[i];
                k--;
            }
            ans=sumneg;
        }
        else
        {
            k=k-n;
            if(k%2==0)ans=sumneg;
            else ans=sumneg+n[n.size()-1];
        }
    }
    else///  positive o ache negetiv oo
    {int i;
        for(i=n.size()-1;i>=0;i--)
        {
            if(k!=0)
            {
                sumneg=sumneg+n[i];
            }
            else break;
            k--;
        }
        if(k==0 && i!=-1)
        {
            for(int j=i;j>=0;j++)

        }



    }




    cout<<ans<<ses;


    return 0;
}


