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
#define whp   " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
/*int leafyear(int n)
{

    int year = n;
   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
      return 1;
   else
      return 0;
}*/
string dayOfProgrammer(int n)
{
    int year = n,x;
    if(year==1800 || year==1900 || year==1700)
        x=1;
   else if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
      x=1;
   else
      x=0;
    string a;
    if(year==1918)a="26.09.";
    else if(x==1)
    a="12.09.";
    else if(x==0)
    a="13.09.";//cout<<a[5]<<a[6]<<ses;
    string b;
    for(int i=9;i>5;i--)
    {
        b.push_back('0'+(n%10));
        n/=10;
    }
    reverse(b.begin(), b.end());
    return a+b;
}
int main()
{
    int n;cin>>n;
    ///int x=leafyear(n);
    cout<<dayOfProgrammer(n)<<ses;
    return 0;
}



