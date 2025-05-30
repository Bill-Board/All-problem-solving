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
        int n, c=0, sum=0, a[102];cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];sum+=a[i];
            if(a[i]==2048)c=1;
        }
        if(c==1){cout<<"YES\n";}
        else if(sum<2048)cout<<"NO\n";
        else
        {
            sum=0;
            sort(a,a+n);reverse(a,a+n);
            for(int i=0;i<n;i++)
            {
                if(a[i]>=2048) continue;
                sum+=a[i];
                if(sum==2048){cout<<"YES\n";break;}
            }
            if(sum!=2048)cout<<"NO\n";
        }

    }

    return 0;
}


