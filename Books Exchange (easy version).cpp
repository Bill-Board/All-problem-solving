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
    IOS
    int q;cin>>q;
    while(q--)
    {
        int n;cin>>n;vi a,ans;
    a.push_back(0);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;a.push_back(x);
    }
    /// 6
    ///  4 6 2 1 5 3;

    for(int i=1;i<=n;i++)
      {
          int pos=i;
          int value=a[i],count=2;
          if(a[i]==i)
          count=1;
          else
          {
              for(int j=0;j<n;j++)
              {
                  int ulo=a[value];
                  if(a[value]==i)
                  {//cout<<value<<whp<<a[value]<<ses;
                  break;}
                  else
                  {
                      value=a[value];
                      pos=value;
                      count++;
                  }
                  //cout<<value<<whp<<a[value]<<ses;
              }
          }
          cout<<count<<whp;
      }
      cout<<ses;
    }


    return 0;
}



