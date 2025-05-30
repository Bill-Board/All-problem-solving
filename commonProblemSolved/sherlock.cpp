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



bool prime(int n)
{
    if(n==1)return false;
    if(n==2 || n==3)return true;
    if(n%2==0)return false;
    else if(n%3==0)return false;
    else
    {
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0)return false;
            else if(n%(i+2)==0) return false;
            else if(n%(i+4)==0)return false;
        }
        return true;
    }
}
int main()
 {
   int num = 100001;
   int arr[999999];
   for(int i=2;i<=num;i++)
   {
       bool flag=prime(i);
       if(flag)arr[i]=1;
       else arr[i]=2;
   }
   //for(int i=2;i<=num;i++)
    //   cout<<arr[i]<<" ";
   //cout<<ses;
   int n;
   cin>>n;
   if(n<=2)num=1;else num=2;
   cout<<num<<ses;
   for(int i=2;i<=(n+1);i++)
    cout<<arr[i]<<whp;
   cout<<ses;

   return 0;
}



