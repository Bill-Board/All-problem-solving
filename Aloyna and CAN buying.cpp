//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
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
        int n,q;cin>>n>>q;
        int a[999];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int a1[999],ans;
        int a2[999];
        int k=0,j=0,low=0;
        for(int i=0;i<n;i++)
        {
            a1[k]=a[i];
            int count=0;
            for(j=i;j<n;j++)
            {
                if(a[i]!=a[j]) break;

             count++;
            }
            if(low<count){low=count;ans=a[i];}
            i=j-1;
            a2[k++]=count;
        }
        //for(int i=0;i<k;i++)
            ///cout<<a1[i]<<whp<<a2[i]<<ses;
        //cout<<ses<<ans<<ses;
        cout<<ans<<ses;

    return 0;
}


