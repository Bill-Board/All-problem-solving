//BISMILLAHIR RAHMANIR RAHEEM
                                      //ALLAH IS WATCHING ME
#include<bits/stdc++.h>
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

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    int n, m, count;
    cin>>n>>m;
    count=n;
    count=count+n/m;//cout<<count<<ses;
    while(1)
    {
        //cout<<"count-n   "<<count-n<<ses;
        int temp=count;
        if(((count-n)+(n%m))>=m)
        {
          //  cout<<n%m<<ses;
            count=count+((count-n)+(n%m))/m;
            //cout<<"count 1  "<<count<<ses;
        }
        else
        {
            count%m==0?cout<<count+1<<ses:cout<<count<<ses;
            return 0;
        }
        n=temp;
    }
  return 0;
}