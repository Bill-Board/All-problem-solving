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
    int t;cin>>t;
    while(t--)
    {
            int a, b,q=0;cin>>a>>b;
            if(a>b)swap(a,b);
            if(a==1 || b==1)
                cout<<"Finite"<<ses;
            else if(a%2==0 && b%2==0)
                cout<<"Infinite"<<ses;
            else if()
            else if(b%a==0)
                cout<<"Infinite"<<ses;
            else
            {
                if(a%3==0 && b%3==0)
                    cout<<"Infinite"<<ses;
                else
                {
                    for(int i=5;i*i<=a;i=i+8)
                    {
                        if(a%i==0 && b%i==0){
                            cout<<"Infinite"<<ses;q=1;
                            break;
                        }
                        else if(a%(i+2)==0 && b%(i+2)==0)
                        {
                            cout<<"Infinite"<<ses;q=1;
                            break;
                        }
                        else if(a%(i+4)==0 && b%(i+4)==0)
                        {
                            cout<<"Infinite"<<ses;q=1;
                            break;
                        }
                        else if(a%(i+6)==0 && b%(i+6)==0)
                        {
                            cout<<"Infinite"<<ses;q=1;
                            break;
                        }
                    }
                    if(q==0)cout<<"Finite"<<ses;
                }
            }
    }


    return 0;
}


