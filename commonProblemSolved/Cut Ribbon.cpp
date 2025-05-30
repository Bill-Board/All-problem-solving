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
#define wp    " "

///typedef int it;
///it midle(it a, it b,it c,it l, it h);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    int n,ss[4];cin>>n>>ss[0]>>ss[1]>>ss[2];sort(ss,ss+3);
   int h=0,a=ss[0],b=ss[1],c=ss[2],loop=n/a +1;
   if(n%a==0)return cout<<n/a<<ses,0;
   for(int i=0;i<=loop;i++)
   {
       for(int j=0;j<=loop;j++)
       {
           int x=c*i+b*j;
           //cout<<x<<ses;
           if(n<x)break;
           if((n-x)%a==0)h=max(h,((n-x)/a)+i+j);
       }
   }cout<<h<<ses;
    return 0;
}



/*for(int j=0;j<=loop;j++)
       {
           int sum=0,x=0;
           for(int k=0;k<=loop;k++)
           {
               sum=a*k+b*j+c*i;
               if(sum==n){x=i+j+k;h=max(h,x);}
               if(sum>n)break;
           }
       }
*/





