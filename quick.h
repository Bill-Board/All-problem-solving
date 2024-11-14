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

int split(int a[],int low,int high)
{
    int i=low;
    int x=a[low];
    for(int j=low+1;j<=high;j++)
    {
        if(a[j]<=x)
        {
            i++;
            if(i!=j)swap(a[i],a[j]);
        }

    }
    swap(a[low],a[i]);
    return a,i;
}

int quicksort(int *a,int low,int high)
{
    int w;
    if(low<high)
    {
       (a,w)= split(a,low,high);
        quicksort(a,low,w-1);
        quicksort(a,w+1,high);
      return a,w;
    }
}
