
//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
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
    int sum=0,sum2=0;
    string s;
    cin>>s;
    if(s[0]!='-')
        cout<<s<<ses;
    //cout<<s.size()<<ses;
    else///   -12345
    {int m=1,n=1;
        for(int i=(s.size()-1);i>0;i--)
        {
            if(i!=(s.size()-2))
            {
                sum+=m*(s[i]-'0');
                m*=10;
            }
            if(i!=(s.size()-1))
            {
                sum2+=n*(s[i]-'0');
                n*=10;
            }
        }sum=-(sum);sum2=-(sum2);
        //cout<<sum<<whp<<sum2<<ses;
        cout<<max(sum,sum2)<<ses;
    }
    return 0;
}

