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
    vector<pair<int,int> >a;
    vi b;int n,x;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(make_pair(x,i));
    }
    int count =0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        cout<<a[i].first<<whp<<a[i].second<<ses;
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        int l=0,h=n-1,mid,j=-1,pos;
        while(l<=h && j==-1)
        {
            mid=floor((l+h)/2);
            if(x==a[mid].first)
                {
                    j=mid;
                    //cout<<a[mid].second<<ses;
                    pos=a[mid].second;}
            else if(x<=a[mid].first)h=mid-1;
            else l=mid+1;
        }
        cout<<"pos  "<<pos<<"  i"<<i<<ses;
        if(pos>i)count++;
        cout<<count<<ses;
    }
cout<<count<<ses;

    return 0;
}


